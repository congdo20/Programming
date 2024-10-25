#include <iostream>
#include <algorithm>
#include <climits> // Để sử dụng INT_MIN

using namespace std;

// Hàm tìm chuỗi con có tổng lớn nhất (Brute Force)
void findMaxSubArray(int arr[], int length, int *start, int *end, int *maxSubSum) {
    int maxSum = INT_MIN;
    int currentSum = 0;
    int Localstart = 0;
    int Localend = 0;

    for (int i = 0; i < length; i++) {
        currentSum = 0;
        for (int j = i; j < length; j++) {
            currentSum += arr[j];
            if (currentSum >= maxSum) {
                maxSum = currentSum;
                Localstart = i;
                Localend = j;
            }
        }
    }

    *start = Localstart;
    *end = Localend;
    *maxSubSum = maxSum;
}

// Hàm in chuỗi con
void printMaxSubArray(int arr[], int start, int end) {
    cout << "Chuỗi con lớn nhất là: {";
    for (int i = start; i <= end; i++) {
        cout << arr[i];
        if (i < end) {
            cout << ", ";
        }
    }
    cout << "}\n";
}

// Hàm tìm tổng chuỗi con có phần tử giữa
int MaxCrossMidPoint(int a[], int low, int mid, int high) {
    int leftSum = INT_MIN;
    int sum = 0;

    // Tìm tổng lớn nhất bên trái
    for (int i = mid; i >= low; i--) {
        sum += a[i];
        if (sum > leftSum)
            leftSum = sum;
    }

    int rightSum = INT_MIN;
    sum = 0;

    // Tìm tổng lớn nhất bên phải
    for (int i = mid + 1; i <= high; i++) {
        sum += a[i];
        if (sum > rightSum)
            rightSum = sum;
    }

    return leftSum + rightSum;
}

// Hàm chia để trị tìm tổng chuỗi con lớn nhất
int MaxSub(int a[], int low, int high) {
    if (low == high) return a[low];

    int mid = (low + high) / 2;
    int wL = MaxSub(a, low, mid);
    int wR = MaxSub(a, mid + 1, high);
    int wM = MaxCrossMidPoint(a, low, mid, high);

    return max(wL, max(wR, wM));  // Sử dụng hàm std::max để tìm giá trị lớn nhất
}

int main() {

    clock_t startTime = clock();
    int arr[] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7};
    int length = sizeof(arr) / sizeof(arr[0]);

    // Brute force tìm chuỗi con lớn nhất
    int start, end, maxSubSum;
    findMaxSubArray(arr, length, &start, &end, &maxSubSum);

    cout << "\nMaximum contiguous subarray sum (Brute Force) is: " << maxSubSum << endl;
    cout << "Starting index: " << start << endl;
    cout << "Ending index: " << end << endl;
    printMaxSubArray(arr, start, end);

    // Chia để trị tìm tổng chuỗi con lớn nhất
    int maxSum = MaxSub(arr, 0, length - 1);
    cout << "\nMaximum contiguous subarray sum (Divide and Conquer) is: " << maxSum << endl;

    clock_t endTime = clock();
    clock_t clockTicksTaken = endTime - startTime;
    double timeInSeconds = clockTicksTaken / (double) CLOCKS_PER_SEC;
    cout << "\nExecution time: " << timeInSeconds << " seconds" << endl;
    return 0;
}
