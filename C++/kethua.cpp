#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>

using namespace std;

class Employee {

private:
string name;
float salary;
public:
void setName(string name){ this -> name = name;};
string getName() { return name; };
float getSalary() { return salary; };
void pay(float salary){ this -> salary = salary;};

};

class Worker : public Employee {
private:
int level;
public:

void doWork(){}
void show(){
    cout << getName() << " " << getSalary() << endl;
}

};

int main(int argc,char *argv[]) {

    Worker w;
    w.getName();
    w.doWork();
    w.setName("Do dz.");
    w.pay(1000);
    w.show();

return 0;
}