// stack.h -- class definition for the stack abstract data type (ADT)
// Stack stores data so that data is always added to or deleted from the top of stack
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
  enum {MAX = 10};  // constant specific to class
  Item items[MAX]; // holds stack items
  int top;         // index for top stack item

public:
  Stack();
  bool isempty() const;
  bool isfull()  const;
  // push() returns false if stack already is full, true otherwize
  bool push(const Item & item);  //add item to stack
  // pop() returns false if stack already is empyt, true otherwize
  bool pop(Item & item);    // pop top into item
}

#endif