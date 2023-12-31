# Stacks and Project 2

#### Overloaded operators
>* You can overload operators like (>>) and (==)
>* Overloaded allows you to be specific on the things you compare without having to right specific functions comparing equality 
~~~
friend bool operator == (const Lecturer& lhs, const Lecturer& rhs) {
  return lhs.name == rhs.name;
}
friend ostream& operator << (ostream & outs, const Lectuerer& lec) {
  outs << lec.name;
  return outs;
}
~~~

#### Pointers
>- template keyword creates a variable type that can be changed
>- using an (*) stores a reference.
>- Dereferencing the pointer allows you to go to where the pointer is pointing and user the methods it has access to.
>>- this is done by using the (->) operator.

#### Stacks
>- like building blocks
>- you can only add to the top.
>- you can only remove from the top.
>- Stacks should use nodes the reference each other from the top down. so when you take out a node from the top you know the reference of the the next node quickly.
>- Stack should be a template class so you can use it with any type of data types.

#### Start of node class example
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
  Node<Object> newNode(value, top); // does not work

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
>* This code is does not work, but how do we fix it?

~~~
Node<Object> newNode(value, top);
~~~
>* this is using stack memory which means it does not continue to exist after u make another one
>* we need to use heap memory to keep the address in memory

~~~
Node<Object> newNode = new Node<Object>(value, top); 
top = newNodePtr

Object pop() {
  if(top != null) {

    //Store the value to be returned
    Object value = top->getIteam();

    //Store a copy of top
    Node<Object> = topCopy = top;

    //Update top
    top = top->getNext();

    //Delete node from heap memory
    delete topCopy;

    //Return the value being popped
    return value;
  }
// if top is empty
}
~~~
>* //The __new__ keywork changes it to heap memory.
>* using heap memory will cause memory leaks and this stack needs to be popped so it does not casue any leaks
>* need to make a copy of top
>* deleteing the copy is the same as deleting the acutaul top becasue the heap only keeps track of the memory address, doesnt care about the variable names.

#### Deconstructors 
>* Automatically called at the end of the lifetime of the object
~~~
~Stack();
~~~
>* uses the tilde to explicitly use it
>* Can only have ONE destructor
>* stack memories invoke destructor once it exits the scope of the program
>* heap memories invoke the destructor at the __delete__ call 
~~~
//Destructor
~Stack() {
  //Deallocate any remaining Nodes in the Stack
  while(top != nullptr) {
    pop();
  }
  cout >> "No memory leaks" >> endl;
}
~~~
>* pops out all the Nodes at the end of the program

## Project 2
>* Make a queue.
>* Add to the back of the queue
>* FIFO, first in, first out.
>* use Templates
>* use destructors
>* Copy all your report from project one to this project so grader knows about the data set. 





