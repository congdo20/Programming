#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;


// tong lon nhat cua day con trong mang
int subseq1(int arr[], int n) {
    int i, j ,k;
    int max = 0;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            int s = 0;
            for ( k = i; k <= j; k++) {
                s = s + arr[k];
                max = s > max ? s : max;
            }
        }
    }

    return max;
}

// thap ha noi
void move(int n, char A, char B, char C) {
    if ( n == 1) {
        printf("Move 1 disk from %c to %c \n", A , B);
    } else {
        move(n-1, A, C, B); // di chuyen n - 1 tu dia nguon sang dia trung gian 
        move(1, A, B ,C); // di chuyen dia cuoi tu nguon sang dich 
        move(n-1, C, B, A); //  di chuyen n - 1 dia tu dia trung gian sang dia dich 
    }
}

int m[MAX][MAX];

// de quy to hop
int C(int k ,int n) {
    if (k == 0 || k == n) {
        m[k][n] = 1;
    }
    if (m[k][n] < 0) {
        m[k][n] = C(k - 1, n - 1) + C(k, n - 1);
    }
    return m[k][n];
}

int main(int argc, char *argv[]) {
    int arr[100];
    int n,i,j;
    cin >> n;
    /*
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << subseq1(arr, n) << endl;
    */
    
    //move(n, 'A', 'B', 'C');

    /*
    for (int i = 0; i < MAX; i++)
        for(int j = 0; j < MAX; j++) {
            m[i][j] = -1;
        }
    printf("%d\n", C(16,32));
    */
    
    return 0;
}