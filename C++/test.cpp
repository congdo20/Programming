#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived";
    }

    void sound() {
        cout << "hehe" << endl;
    }
};

int main() {
    Derived d;
    Base* b = &d; // up-casting
    b->display();

    Base a;
    Derived* c = dynamic_cast<Derived*>(&a);
    if (c) {
        c->sound();
    } else {
        cout << "Down-casting không thành công" << endl;
    }

    return 0;
}
