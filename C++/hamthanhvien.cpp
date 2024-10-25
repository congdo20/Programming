#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
// ham thanh vien la 1 ham thuoc 1 lop
// ham tu do duoc dinh nghia ben ngoai lop, la ham con trong C
class Point { //D/N lop point
    
float _x, _y; // mac dinh la private

public:
    void setXY(float x, float y); // khai bao ham thanh vien
    float getX(){return _x;};   // D/N ham thanh vien ben trong lop
    float getY(){return _y;};   // D/N ham thanh vien ben trong lop
    float distanceTo(Point p);  // khai bao ham thanh vien


};

// D/N ham thanh vien ben ngoai lop
void Point::setXY(float x, float y){
    _x = x;
    _y = y;
};

float Point::distanceTo(Point p){
// D/N ham thanh vien ben ngoai lop
    float d = (p._x - _x) * (p._x - _x) + (p._y - _y) * ( p._y - _y);
    return sqrt(d);
}

int main(int argc, char* argv[]){

    Point a,p;
    Point *pointer = &a;
    pointer -> setXY(0,20); 
    // a.setXY(0,0);
    p. setXY(10,20);
    cout << "Distance from a to p is: " << a.distanceTo(p) << endl;

}