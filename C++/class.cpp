#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Circle{
private:
static const float PI;
float r;

public:
void setRadius(float radius) {
    r = radius;
}
float getRadius(){
    return r;
}
float area(){
    return PI*r*r;
}

};

const float Circle::PI = 3.1415;

int main(int argc, char *argv[]){
    Circle c1;  // khai bao va su dung doi tuong thong thuong
    c1.setRadius(10);
    cout << "Area of circle with r = " << c1.getRadius() << ", is: " << c1.area() << endl;

    Circle *pc = &c1; // khai bao va su dung doi tuong kieu con tro
    pc -> setRadius(20);
    cout << "Area of circle with r = " << pc -> getRadius() << ", is: " << pc -> area() << endl;

    return 0;
}