#ifndef BAG_H
#define BAG_H

#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

template <class T>
class Bag {
	friend	ostream& operator<<<>(ostream&, const Bag <T>&);
public:
	Bag(int BagSize) :MaxSize(BagSize), name("Bag"), top(0) {
		array = new T[MaxSize];
	};  
	~Bag() {delete[] array; };   // destructor
	virtual int  Size() const { return 0; };
	virtual bool IsEmpty() const { return 0; };
	virtual bool IsFull() const { return 0; };
	virtual void Push(const T&) {};
	virtual T* Pop(T&) { return 0; };
protected:	
	T *array;	
	int MaxSize;
	int top;   // position of the top element
	char name[20];
	void Empty() { cout <<"   "<<setw(6) << left << name << " is empty. Cannot Pop()\n"; };
	void Full(const T& x) { cout <<"   "<< setw(6) << left << name << " is full for " << x << endl; }
	void message(const T& x) {};  
};

template <class T>
ostream& operator<<<>(ostream& os, const Bag <T>& b) { return os; };
#endif

