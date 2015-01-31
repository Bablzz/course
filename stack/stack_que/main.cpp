#include <iostream>
#include <cstdlib>

using namespace std;

// ������� ����� � �������
struct E {
  int value; // �������� ��������
  E* next; // ��������� �� ��������� �������
};

// ����
struct Stack {
  E* top = new E; // ������� �����
  // �����������
  Stack() : top(NULL) {}
  // �������� ��������� �� ������� �����
  void push(int value){
   E* temp = new E;
   temp->value = value;
   temp->next = top ? top : NULL;
   top = temp;
  }
  // ����� �������� � ������� �����
  int pop(){
     int data = top->value;
     E *temp = top;
     top = top->next;
     delete temp;
     return data;
  }
};

// ���. �������: �������
struct Queue {
  E* head; // "������" - ������ �������
  E* tail; // "�����" - ����� �������
  // �����������
  Queue() : head(NULL), tail(NULL) {};
  // � ����� �������
  void put(int value){
     E *cur = new E;
     cur->value = value;
     cur->next = NULL;
     if (tail) {
        tail->next = cur;
     }
        else  {
         head = cur;
        }
     tail = cur;
     }
  // ������� ������ ������� �� �������
  int get(){
    int data = head->value;
    E *cur = head;
    head = head->next;
    delete cur;
    return data;
  }
};

int main() {
  Stack s;
  s.push(2);
  s.push(3);
  cout << "3 - " << s.pop() << endl;
  cout << "2 - " << s.pop() << endl;

  Stack s2;
  s2.push(10);
  s.push(11);
  cout << "11 - " << s.pop() << endl;
  cout << "10 - " << s2.pop() << endl;

  Queue q;
  q.put(10);
  q.put(14);
  cout << "10 - " << q.get() << endl;
  cout << "14 - " << q.get() << endl;

  return 0;
}
