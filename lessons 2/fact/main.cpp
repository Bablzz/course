#include <iostream>

using namespace std;

long long factorial(int n) {
    long long f = 1L;
    for (int i = 2; i <= n ; ++i){
        f *= i;
        ;
    }
return f;
}

int main()
{
 for (int i = 1; i <=20; ++i){
 cout << "factorial = " << factorial(i) << endl;
}
 return 0;
}
