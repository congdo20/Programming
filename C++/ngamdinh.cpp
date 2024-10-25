#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void HamND( int a = 10 ,int  b = 20);

int main(int argc, char *argv[]){

cout << "have no parameters" << endl;
HamND();

cout << "have one parameters" << endl;
HamND(23);

cout << "have two parameters" << endl;
HamND(23,50);

return 0;

}



void HamND(int a, int b){

cout << "Gia tri tham so a: " << a << endl;
cout << "Gia tri tham so b: " << b << endl;
cout << endl;

}