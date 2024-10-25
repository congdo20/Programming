#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void exchange(int &a, int &b);

int main(int argc, char *argv[])
{
    string name = "Hehe";
    /*
    cout  << "please enter your name: " ;
    cin >> name;
    */

    /*
    cout << "Enter your name: ";
        getline (cin, name);
        cout << "your name is: ";
        cout << name << endl;
    */

    /*
        int n = 20;
        int &m = n; // m la bien tham chieu den n - hay con goi la bi danh cua n,  != con tro
        m = 23; // tuong duong n = 23
        cout << n << endl;
        cout << &m<< endl;
        cout << &n<< endl; // m va n co cung dia chi

    */

    int x = 20, y = 23;
    cout << "Before exchange, x = " << x << ", y = " << y << endl;
    exchange(x, y);
    cout << "After change, x = " << x << ", y = " << y << endl;

    return 0;
}

void exchange(int &a, int &b)
{
    int c = b;
    b = a;
    a = c;
}

