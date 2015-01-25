#include <iostream>

using namespace std;

int main()
{
   int b;
   const bool cond = true;
   cin >> b;
   b = (cond ? 10 : 5);
   cout << "b = " << b << endl;
   return 0;
}
