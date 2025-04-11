#include "doublylinkedlist.h"

// Constructor for the node class                                                                                                                                                                                                
// Initially, next and prev do not point to any nodes                                                                                                                                                                            
Node::Node(string potentialData) {
  data = potentialData;
  next = nullptr;
  prev = nullptr;
}

// Constructor for the doubly linked list                                                                                                                                                                                        
// Initialize a head and tail, which may later be assigned a node                                                                                                                                                                
DoublyLinkedList::DoublyLinkedList() {
  head = nullptr;
  tail = nullptr;
}

void DoublyLinkedList::insertfront(string potentialData) {
  Node* potentialNode = new Node(potentialData);
  if (!head) {  // If there are no nodes yet, make this one the head and tail                                                                                                                                                    
    head = potentialNode;
    tail = potentialNode;
  } else {  // If there is a head node, move it to come after potentialNode                                                                                                                                                      
    potentialNode->next = head;
    head->prev = potentialNode;
    head = potentialNode;
  }
}

void DoublyLinkedList::insertrear(string potentialData) {
  Node* potentialNode = new Node(potentialData);
  if (!tail) {  // If there are no nodes yet, make this one the head and tail                                                                                                                                                    
    head = potentialNode;
    tail = potentialNode;
  } else {  // If there is a tail node, replace it with potentialNode                                                                                                                                                            
    tail->next = potentialNode;
    potentialNode->prev = tail;
    tail = potentialNode;
  }
}

string DoublyLinkedList::removefront() {
  if (!head) {
    return "";  // Return empty string if there are no nodes in the list                                                                                                                                                         
  }
  Node* outNode = head;  // Prep the node to be removed                                                                                                                                                                          
  string returnStr = outNode->data;
  if (head == tail) {  // Case where there is only one node                                                                                                                                                                      
    head = nullptr;
    tail = nullptr;
  } else {
    head = outNode->next;
    head->prev = nullptr;
  }
  delete outNode;  // Prevent memory leaks                                                                                                                                                                                       
  return returnStr;
}

string DoublyLinkedList::removerear() {
  if (!tail) {
    return "";  // Return empty string if there are no nodes in the list                                                                                                                                                         
  }
  Node* outNode = tail;
  string returnStr = outNode->data;
  if (tail == head) {  // Only one node                                                                                                                                                                                          
    head = nullptr;
    tail = nullptr;
  } else {
    tail = outNode->prev;
    tail->next = nullptr;
  }
  delete outNode;  // Prevent memory leaks                                                                                                                                                                                       
  return returnStr;
}

// The destructor deletes all new nodes to prevent memory leaks                                                                                                                                                                  
DoublyLinkedList::~DoublyLinkedList() {
  while (head) {
    Node* temp = head;
    head = head->next;
    delete temp;
  }
}
