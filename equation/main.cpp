// Решение квадратного уравнения
// -------------------------------
// Задание:
// Написать программу, которое решает квадратное уравнение.
// Пользователь вводит (с клавиатуры) три действительных коэффициента a, b, c.
// Программа выводит все решения уравнения (два, одно), "решений нет",
// если их нет или "бесконечно много решений", если подходит любое значение x (a = 0, b = 0, c = 0).
// Обработать все варианты исходных данных.
#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
void solve_equation(double a, double b, double c){
 double d, x1, x2;
  if (a == 0) { //fabs(a)>EPS, где EPS = 1e-10
    cout << "x2 = " << endl;
    cout << -1*(b/c) << endl;
  }
   else { if ((b == 0) || (c == 0)) {
        cout << "x1,2 = 0" << endl;

     } else {
        d = pow(b,2) - 4*a*c;
     }
if (d > 0) {
    x1 = (-1*b + sqrt(pow(b,2) - 4*a*c));
    x2 = (-1*b - sqrt(pow(b,2) - 4*a*c));
    } else { if (d == 0) {
        x1 = x2 = (-1*b)/(2*a);
    }
}
printf("x1= %4.2f \n", x1);
printf("x1= %4.2f \n", x2);
}

}


int main() {
// Коэффициенты квадратного уравнения
double a, b, c;
// a*x^2 + b*x + c = 0
cout << "a = "; cin >> a;
cout << "b = "; cin >> b;
cout << "c = "; cin >> c;
cout << endl;
// Вызов функции решения квадратного уравнения
solve_equation(a,b,c);
return 0;
}
