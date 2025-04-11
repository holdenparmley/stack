#include <iostream>
#include "stack.h"
using namespace std;

int main() {
  Stack stack;  // Create a stak object                                                             

  string line;
  while (getline(cin, line)) {  // Pull input, line by line                                         
    stack.push(line);
  }

  while (!stack.isEmpty()) {  // As long as the stack has data left...                              
    cout << stack.pop() << endl;  // Pop the data!                                                  
  }
};

