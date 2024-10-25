#include <iostream>


int main( int argc, char *argv[]) {
	double width = 0;
	double length = 0;
	std::cout << " Nhap chieu rong hcn: " << std::endl;
	std::cin >> width;
	std::cout << " Nhap chieu dai hcn: " << std::endl;
	std::cin >> length;
	std::cout << width * length << std::endl;
}