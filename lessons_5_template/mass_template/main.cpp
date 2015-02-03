#include <iostream>

using namespace std;
//a - массив
//N - количество элементов
template <class T> void show(T a[], int N) {
int i = 0;
for (i = 0; i < N; i++) {
    cout << a[i] << ", ";
}
}

int main()
{
    int ints[6] = {0,1,2,3,4,5};
    show(ints, 6);
    return 0;
}
