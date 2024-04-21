#ifndef QUEUE_H_
#define QUEUE_H_

#include "bag.h"

template <class T>
class Queue:public Bag<T> {
    friend	ostream& operator<<<>(ostream&, const Queue <T>&);

public:
    Queue(int QueueSize):Bag(QueueSize) {
        front = rear = -1;
        strcpy(name, "Queue");
    };
    ~Queue() {};
    T* Pop(T&) { return 0; };         // delete the element from queue
    void Push(const T&) {};
private:
    int rear, front; // circular list implementation
};


template <class T>
ostream& operator<<<>(ostream& os, const Queue <T>& q) { return os; };

#endif