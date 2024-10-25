#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Point
{
	float _x, _y;
	void *self;

public:
	//constructor
	Point(float _x = 0, float _y = 0) 
	{
		this -> _x = _x; // con tro this, dung de lay dia chi cua doi tuong hien tai
		this -> _y = _y; // su dung thí de phan biet giua tham so va bien thanh vien
		self = this;
		cout << "My address is: " << self << endl;
	}

	Point *getPointer(){
		return this;
	}

	float distanceTo(Point p)
	{
		float d = (p._x - _x) * (p._x - _x) + ( p._y - _y) * ( p._y - _y);
		return sqrt(d);
	}

};

int main(int argc,char *argv[]) 
{
	Point p1;
	Point p2(10);
	Point p3(20,20);
	cout << "address is: " << p1.getPointer() << endl;
	
	cout << "D12 = " << p1.distanceTo(p2) << endl;
	cout << "D23 = " << p2.distanceTo(p3) << endl;
	return 0;
}