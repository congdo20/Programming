#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// ham ban khong phai la ham thanh vien cua lop do
// nhung co the truy nhap vao thanh phan rieng tu cua lop
// co the la ham tu do hoac ham rieng tu cua lop khac

class Point{
	float _x, _y;

public:
	Point(float x = 0, float y = 0){
		this -> _x = x;
		this -> _y = y;
	}

	float getX() {return _x;}
	float getY() {return _y;}

	friend float distanceP2P(Point p, Point q);
};

float distanceP2P(Point p, Point q){
	return sqrt((p._x - q._x) *(p._x - q._x) + (p._y - q._y) * (p._y - q._y));
}

int main(int argc, char *argv[]){
	Point p1, p2(10), p3(20,20);
	cout << "D12 is: " << distanceP2P(p1, p2) << endl;
	cout << "D23 is: " << distanceP2P(p2, p3) << endl;

	return 0;


}