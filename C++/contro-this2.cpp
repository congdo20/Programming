#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//su dung this trong cau truc moc noi 
class C{
	int n;
	C *next;

public:
	C(int m){
	 	n = m;
	 	next = this;
	}
	void add(C &a){
		a.next = next;
		next = &a;
	}
	void show(){
		C *here = this;
		C *p = here;
		do{
			cout << p -> n << " ";
			p = p -> next;
		}
		while (p != here);
	}

};

int main(int argc, char *argv[]){
	C c1(1), c2(2), c3(3);
	c1.add(c2);
	c2.add(c3);
	c1.show();
	c2.show();

}


