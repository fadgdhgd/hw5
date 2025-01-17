#include "stack.h"
#include "bag.h"
#include "queue.h"
int main(){
	Bag<int> b(3);   	// uses Bag constructor to create array of size 3
	Stack<int> s(3);	// uses Stack constructor to create array of size 3
	Queue<int> q(5);    // circular queue needs one more pace
	int i=0, x[8]={1,2,3,4,5,6,7,8},t;
	cout << "1) PUSH DATA INTO BAG, STACK AND QUEUE\n";
		while(i < 4) {
			b.Push(x[i]);    // use Bag::Push
			s.Push(x[i]);    // Stack::Push not defined, use Bag::Push
			q.Push(x[i++]);    // Queue::Push override Bag::Push for circular list
		}
		cout << "\n2) LOOK INTO THE DATA\n";
		b.Pop(t); cout << b;
		s.Pop(t); s.Push(x[4]);  cout << s;
		q.Pop(t); q.Pop(t);  
		q.Push(x[4]); q.Push(x[5]); q.Push(x[6]);
		cout << q;

		cout << "3) POP DATA FROM THREE OBJECTS\n";
		i = 0;  while (i < 4) b.Pop(x[i++]); 
		i = 0;  while (i < 4) s.Pop(x[i++]);
		i = 0;  while (i < 5) q.Pop(x[i++]);

	return 0;
};