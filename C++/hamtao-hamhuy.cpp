#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Point{
	float _x, _y; // mac dinh la private


public:
//ham tao tu dong goi sau khi khai bao 1 doi tuong, khoi tao gia tri ban dau can thiet cho doi tuong
	Point(float x = 10, float y = 20) {
		_x = x;
		_y = y;
		cout << "Goi ham tao" << endl;
	}


//ham thiet lap sao chep
	Point(Point & p) {
		_x = p._x;
		_y = p._y;
	}

 // ham huy dung de giai phong tai nguyen ma doi tuong dung, vd:vung nho duoc cap phat dong
	~Point(){
		cout << "Goi ham huy" << endl;
	}



	void setXY(float x, float y) {
		_x = x;
		_y = y;
	}
	float getX() { return _x;};
	float getY() { return _y;};
	float distanceTo(Point p){
		float d = (p._x - _x) * (p._x - _x) + ( p._y - _y) * ( p._y - _y);
		return sqrt(d);
	};

};


int main ( int argc, char * argv []) {

	/*
	Point p;
	cout << p.getX() << endl;
	cout << p.getY() << endl;
	p.setXY(30,40);
	cout << p.getX() << endl;
	cout << p.getY() << endl;
	Point q(20,40); // ham ngam dinh, co the khai bao q(10) cho moi bien x
	cout << q.getX() << endl;
	cout << q.getY() << endl;
	cout << "\n";
	cout << q.distanceTo(p) << endl;
	*/


	/*
	Point p1(10,20);
	Point p2(p1); // sao chep doi tuong p1 sang p2
	cout << "p1: X = " << p1.getX() << ", Y = " << p1.getY() << endl;
	cout << "p2: X = " << p2.getX() << ", Y = " << p2.getY() << endl;
	*/

	

}



