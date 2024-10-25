#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char *argv []) {

int *p = (int*) malloc(3*sizeof(int));
if (p != NULL)
cout << "Cap phat thanh cong " << endl;
else 
cout << "Cap phat that bai" << endl;

free(p);


int *p1 = new int; // cap phat 1 o nho kieu int

if( p1 != NULL)
cout << "Cap phat thanh cong" << endl;
else
cout << "Cap phat that bai" << endl;

delete p1; // giai phong 1 ngan nho

int *p2 = new int[3]; // cap phat 1 vung nho kieu int
if (p2 != NULL)
cout << "Cap phat thanh cong" << endl;
else
cout << "Cap phat that bai" << endl;

delete [] p2; // giai phong 1 mang cac ngan nho


int **a = new int*[3]; // cap phat con tro 2 chieu
for(int i = 0; i < 3; i++)
a[i] = new int[3];

for(int i = 0; i < 3; i++)
if (a[i] != NULL)
cout << "Cap phat thanh cong" << endl;
else
cout << "Cap phat that bai" << endl;

for(int i = 0; i < 3; i++)  // giai phong con tro  2 chieu
delete [] a[i];
delete [] a;


}