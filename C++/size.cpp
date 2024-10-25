#include <iostream>
#include <vector>
#include <list>

/*
// khoi tao vector tu 1 den n
std::vector<int> Initialize(int n) {
	std::vector<int> a;
	for(int i = 1; i <= n; i++){
		a.push_back(i); // gan gia tri cho phan tu
	}
	return a;
}

//tong cac ptu cua vector
int SumOfVector(std::vector<int> a) {
	int sum = 0;
	for(int i = 0; i < a.size(); i++){
		sum += a.at(i);  // phan tu thu i + 1 trong vector
	}
	return sum;
}

//tong cac so le
int SumOfOdd(std::vector<int> a) {
	std::vector<int>:: iterator it; //con tro it
	int sum = 0;
	for( it = a.begin(); it != a.end(); it++)
	{
		if(*it % 2 != 0)
			sum += *it;
	}
	return sum;
}

// truyen gia tri cho vector
std::vector<int> PushVector(std::vector<int> &a) {
	for(int i = 0; i < a.size(); i++) {
		a.at(i) = i;
	}
	return a;
}

//doi kich thuoc cua vector
std::vector<int> ResizeVector(std::vector<int> &a, int n) {
	a.resize(n);
	return a;
}

// hien thi vector so thuc
void Display(std::vector<int> a) {
	for(int i = 0; i < a.size(); i++) {
		std::cout << a.at(i) << " ";
	}

		std::cout << std::endl;
}

// hien thi vector chuoi
void Display(std::vector<std::string> a) {
	for(int i = 0; i < a.size(); i++) {
		std::cout << a.at(i) << " ";
	}

		std::cout << std::endl;
}

// sap xep tang daan
std::vector<int> SortIncreVector(std::vector<int> &a) {
	for(int i = 0; i < a.size(); i++) {
		for(int j = i + 1; j < a.size(); j++){
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return a;
}

// sap xep giam dan
std::vector<int> SortDeincVector(std::vector<int> &a) {
	for(int i = 0; i < a.size(); i++) {
		for(int j = i + 1; j < a.size(); j++){
			if(a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	return a;
}

// tich lon nhat cua 2 ptu lien ke
int maxOfDoubleElement(std::vector<int> &a) {
	int max = a[0] * a[1];
	for(int i = 0; i < a.size() - 1; i++) {
		if(a[i] * a[i + 1] > max) {
			max = a[i] * a[i + 1];
		}
	}
	return max;
}

// vector chuoi lon nhat trong mang
std::vector<std::string> findLongestStrings(std::vector<std::string> arr)
{   
    int max = 0;
    std::vector<std::string> result;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i].size() > max)
        max = arr[i].size();
    }

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i].size() == max)
        result.push_back(arr[i]);
    }

    return result;
}



int main(int argc, char *argv[]) {
	std::vector<int> a = Initialize(5);
	for(int i = 0; i < a.size(); i++) {
		std::cout << a[i] << std::endl;
	}

	std::cout << "Tong cac phan tu cua vector la: ";
	std::cout << SumOfVector(a) << std::endl;

	std::cout << "Tong cac phan tu le la: ";
	std::cout << SumOfOdd(a) << std::endl; 

	Display(a);

	ResizeVector(a, 2);
	Display(a);

	ResizeVector(a, 10);
	Display(a);

	SortIncreVector(a);
	Display(a);

	SortDeincVector(a);
	Display(a);

	PushVector(a);
	Display(a);

	std::cout << maxOfDoubleElement(a) << std::endl;

	//SortDeincVector(a);
	//Display(a);

	std::vector<std::string> arr;
	arr.push_back("Hehe");
	arr.push_back("hi");


	Display(arr);
	Display(findLongestStrings(arr));

	a.pop_back(); // xoa phan tu cuoi cung
	Display(a);

	std::cout << a.front() + a.back() << std::endl; // tong phan tu dau va cuoi
	std::vector<int>:: iterator it;
	//it = a.begin();
	int l = 1, r = 3;
	a.erase(a.begin() + l,a.begin() + r + 1); // xoa tu phan tu l den r
	Display(a);

	return 0;
}

*/

std::list<int>	initList(int n) {
	std::list<int> a;
	std::list<int>::iterator it;
	int count = 0;
	for(int i = 0; i < n; i++) {
		a.push_back(i);
	}
	return a;
}

void Display(std::list<int> &a) {
	for(std::list<int>::iterator it = a.begin(); it != a.end(); it++) {
	std::cout << *it << " ";	
	}
	std::cout << std::endl;
}



int main(int argc, char *argv[]) {

	std::list<int> arr(3,2);
	Display(arr);

	std::list<int> hihi = initList(10);
	Display(hihi);
	

	return 0;
}