#include <iostream>
#include <cstdlib>

using namespace std;

// Элемент стека и очереди
struct E {
  int value; // Значение элемента
  E* next; // Указатель на следующий элемент
};

// Стек
struct Stack {
  E* top = new E; // Вершина стека
  // Конструктор
  Stack() : top(NULL) {}
  // Значение поместить на вершину стека
  void push(int value){
   E* temp = new E;
   temp->value = value;
   temp->next = top ? top : NULL;
   top = temp;
  }
  // Взять значение с вершины стека
  int pop(){
     int data = top->value;
     E *temp = top;
     top = top->next;
     delete temp;
     return data;
  }
};

// Доп. задание: очередь
struct Queue {
  E* head; // "Голова" - начало очереди
  E* tail; // "Хвост" - конец очереди
  // Конструктор
  Queue() : head(NULL), tail(NULL) {};
  // В конец очереди
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
  // Забрать первый элемент из очереди
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
