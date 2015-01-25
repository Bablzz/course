//все элементы на четных местах взять с+
//все на нечетных местах с -
// и сложить их

#include <iostream>

using namespace std;

int sum (int A[], int N){
 int summinus, sumplus, summa, i;
 summa = summinus = sumplus = 0;
 i = 0;
while (i<=(N-1)){
  if ((i % 2) == 0) {
    sumplus += A[i];
  } else {
    summinus += -1*A[i];
    };
i += 1;
}
summa = sumplus + summinus;
return summa;

}

int main() {
    int B[6] = {1,3,-2,4,2,10};
    cout << "sum = " << sum(B, 6) << endl;
    return 0;
}
