#include <iostream>
#include <cstdlib>
#include <string>


using namespace std;

void swap (int &a, int &b) {
    int c = a;
    a = b; 
    b = c;
}




int main (int argc, char *argv[]){
    int a = 20, b = 23;
    double d = 20.0112321, e = 23.12312301;

    swap(a,b);
    cout << "a: " << a << ", b: " << b << endl;
    swap(d,e);
    cout << "d: " << d << ", e: " << e << endl;

    return 0;
}