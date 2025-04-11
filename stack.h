#include <iostream>
#include "doublylinkedlist.h"
using namespace std;

class Stack {
public:
  Stack();
  void push(string str);
  string pop();
  bool isEmpty();
  ~Stack();
private:
  DoublyLinkedList doublylinkedlist; // Composition including DoublyLinkedList class                

};
