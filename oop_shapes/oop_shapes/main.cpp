#include <iostream>

using namespace std;

// ������� �����: ������
class Shape {
  // ��� ������ (������)
  char *name; // ����������� private
protected:
  // ����������� ��� ������ �� �����������
  Shape(char *name = NULL) : name(name) {
  }
  // ������ ������ ���������� ��� ���
  void show(){
    if(name != NULL){
      cout << name << " ";
    }
  }
};

// ���������� Shape:
class Point : protected Shape {
  double x, y;
public:
  // �����������
  Point(char *name, double x, double y) :
      Shape(name), x(x), y(y) {
  }
  void show(){
    cout << "Point ";
    Shape::show();
    cout << "  x = " << x << " y = " << y << endl;
  }
};

class Line : protected Shape {
  // ������ 2 �����
  Point a, b;
 public:
  // �����������
  Line(char *name, Point a, Point b) :
    Shape(name), a(a), b(b){
  };
void show(){
 cout << "Line ";
 Shape::show();
 a.show();
 b.show();
};

};

class Circle : protected Shape {
  // ���� ����� � ������
  Point center;
  double radius;
  // �����������
public:
  Circle(char *name, Point center, double radius) :
    Shape(name), center(center), radius(radius){
  }
  void show(){
 cout << "Circle ";
 Shape::show();
 center.show();
 cout << radius << endl;
};
};

// ����� ����� show() -> ���������� �������� ������

int main() {
  Point A("A", 1.2, 2.1), B("B", 5, 6);
  Line line1("AB", A, B);
  Circle c1("CircleA", A, 5.0),
    c2("CircleB", B, 7.2);
  A.show(); B.show();
  line1.show();
  c1.show();
  c2.show();

  return 0;
}
