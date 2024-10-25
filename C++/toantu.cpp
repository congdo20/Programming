#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Phanso {
	int tuso, mauso;
public:
	Phanso(int ts = 0, int ms = 1){
		if( ms == 0){
			cout << "Mau so khong the bang 0!" << endl;
		}
		tuso = ts;
		mauso = ms;
	}

	Phanso operator*(Phanso p){
		Phanso q;
		q.tuso = p.tuso * tuso;
		q.mauso = p.mauso * mauso;
		return q;
	}
	Phanso operator!(){
		Phanso p;
		p.tuso = mauso;
		p.mauso = tuso;
		return p;
	}

	friend Phanso operator+(Phanso p, Phanso q);
	friend ostream& operator<<(ostream & os, Phanso p);
};

Phanso operator+(Phanso p, Phanso q){
	Phanso r;
	r.tuso = p.tuso * q.mauso + p.mauso * q.tuso;
	r.mauso = p.mauso * q.mauso;
	return r;
}


ostream& operator<<(ostream & os, Phanso p){
	os <<  p.tuso << "/" << p.mauso;
	return os;
}


int main(int argc, char *argv[]){
	Phanso p(2,3) , q(4,7);
	cout << p << " * " << q << " = " << p * q << endl;
	cout << p << " + " << q << " = " << p + q << endl;
	cout << p * 2 + q + 4 << endl;
	cout << q + 3 << endl;
	cout << 3 + q << endl;
	cout << !p << endl;



	return 0;
}