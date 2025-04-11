#include "stack.h"

Stack::Stack() {
};

void Stack::push(string str) {
  doublylinkedlist.insertfront(str);  // I chose to use the front as the "top" of the stack         
};

string Stack::pop() {
  return doublylinkedlist.removefront();  // Remove objects from the front to pop                   
};

bool Stack::isEmpty() {
  return doublylinkedlist.head == nullptr;  // If there is no heaed node, the stack is empty        
};

Stack::~Stack() {
  while (!isEmpty()) {
    pop();
  }
};

