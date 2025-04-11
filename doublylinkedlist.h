#include <iostream>
#include <string>
#include <optional>
using namespace std;

class Node {
public:
  string data;
  Node* next;
  Node* prev;
  Node(string potentialData);
};

class DoublyLinkedList {
public:
  Node* head;
  Node* tail;
  DoublyLinkedList();
  void insertfront(string potentialData);
  void insertrear(string potentialData);
  string removefront();  // removefront() and removerear() have no parameters             
  string removerear();
  ~DoublyLinkedList();  // Destructor to remove "new" nodes and prevent memory leaks      
};
