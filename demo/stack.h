#ifndef STACK_H_
#define STACK_H_

#include "bag.h"

template <class T>
class Stack:public Bag<T> {
  
public:
    Stack(int StackCapacity) :Bag(StackCapacity) {
        strcpy(name, "Stack");
    };
    ~Stack() {};
    T* Pop(T&) { return 0; }; // delete the element from stack
};


#endif