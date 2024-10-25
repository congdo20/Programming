#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>

using namespace std;
 // xay dung 1 lop san sinh ra cac so nguyen ngau nhien

class IntFactory{

static unsigned count;
public:
	// ham khoi tao
	static void Init(){ 
		srand((unsigned)time(0));
		count = 0;
	}

	// khoi tao 1 so ngau nhien 
	static int CreateRandom(){
		count++;
		return rand();
	}

	// tra ve so luong so nguyen da tao ra
	static unsigned getCount(){
		return count;
	}

};

unsigned IntFactory::count;

int main(int argc,char *argv[]){
	IntFactory fac;
	IntFactory::Init();
	int n;
	cout << "Number of randoms: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << fac.CreateRandom() << " " << endl;
	}

		cout << "Number of created randoms: " << IntFactory::getCount() << endl;

		return 0;
}