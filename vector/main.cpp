// Домашнее задание - структуры данных
#include <iostream>
#include <cmath>

using namespace std;

struct Point {
  double x,y;
};

double sqr(double x){
  return x*x;
}

double dist(Point a, Point b){
  return
    sqrt(sqr(a.x-b.x) +
         sqr(a.y-b.y));
}

typedef Point Vector;

// Сумма
void sum(Vector A, Vector B, Vector summa) {
   summa.x = A.x + B.x ;
   summa.y = A.y + B.y ;
   cout << "vector sum  = (" << summa.x<< "),(" <<summa.y << ")";
}

// Разность
void sub(Vector A, Vector B, Vector subV){
  subV.x = A.x - B.x;
  subV.y = A.y - B.y;
  cout << "vector sub  = (" << subV.x<< "),(" <<subV.y << ")";
}

// Скалярное произведение векторов
Point dotProduct(Vector A, Vector B){
  // TODO: Реализовать
}

int main()
{
    Point a = {1.2, 1.3},
          b = {10.2, 3.3},
          summ = {0,0},
          subV = {0,0};

    cout << dist(a,b) << endl;
    sum(a,b,summ);
    cout << endl;
    sub(a,b, subV);
    return 0;
}
