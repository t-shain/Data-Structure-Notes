# Lecture4

## Review

##### Pointers
>- template keyword creates a variable type that can be changed
>- using an (*) stores a reference.
>- Dereferencing the pointer allows you to go to where the pointer is pointing and user the methods it has access to.
>>- this is done by using the (->) operator.

##### Stacks
>- like building blocks
>- you can only add to the top.
>- you can only remove from the top.
>- Stacks should use nodes the reference each other from the top down. so when you take out a node from the top you know the reference of the the next node quickly.
>- Stack should be a template class so you can use it with any type of data types.
###### Start of node class example
~~~

#include "Node.h"
#include <iostream>
using std::cout, std::endl;

template<typename Object>
class Strack {

private:
  Node<Object>* top;

public:

// Constructor 
  Strack() {
    top = nullptr;
  }

// Push (add a value to stack)
  void push(Object value){

//Creates new node to store the value
  Node<Object> newNode(value, top);

//update top to point to the nenw node
  top = &newNode;

  }

// Pop (remove value from stack)

// Print stack from top to bottom
void print() const {
    cout << "Top of Stack" << endl;
    Node<Object>* curr = top;
    while(curr != nullptr){
      cout << curr->getIteam() << endl;
      curr = 
    }
    cout << "Bottom of Stack" << endl;
  }

~~~

