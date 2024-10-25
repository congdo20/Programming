#include <iostream>
#include <cstdlib>
#include <string>

using namespace std; //khong gian ten chuan 

namespace A{
    int x = 5;
    void printX(){
        cout << x << endl;
    }
}

namespace B{
    int x = 10;
    void printX(){
        cout << x  << endl;
    }
}


int main(int argc, char *argv[]){
A::printX();
B::printX();

return 0;
}
