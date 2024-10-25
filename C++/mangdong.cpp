#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class DynamicArray {
	int *p;
	unsigned int size;
public:
	DynamicArray(unsigned int asize = 0){
		p = new int[asize];
		size = asize;
	}

	~DynamicArray(){
		if (size > 0) delete [] p;
	}

	void Init(){
		if (size > 0) {
			for (int i = 0; i < size; i++ )
				p[i] = rand();
		}
	}


	void ChangeSize(unsigned int newsize){
		if (size > 0) delete [] p;
		p = new int[newsize];
		size = newsize;
	}

	void Show(){
		if(size > 0){
			cout << " Array with the size: " << size << endl;
			for ( int i = 0; i < size; i++) cout << p[i] << " ";
				cout << endl;
		} else {
			cout << "Haven't an Array" << endl;
		}
	}

};

int main(int argc, char *argv[]) {

	DynamicArray a(5), b;
	a.Init();
	a.Show();

	a.ChangeSize(10);
	a.Init();
	a.Show();

	b.Init();
	b.Show();

	return 0;

}