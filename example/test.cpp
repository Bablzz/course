#include <iostream>

using namespace std;

int main(){
float *r = new float (20.1f);
int *pi = ( int * ) r;

cout<< "pi = "<< *pi << endl;

int *z = new int(15);
int *p = new int (10);
cout<< "p = "<< *p << endl;
cout<< "z = "<< *z << endl;
cout<< "z address = "<< z << endl;



delete r;
delete z;
delete p;


return 0;
}
