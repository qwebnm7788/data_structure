#include "ArrayQueue.h"
#include <iostream>
using namespace std;

int main() {
	Queue<int> q;

	q.enqueue(5);
	q.enqueue(3);
	
	cout << q.size() << endl;

	q.dequeue();
	q.enqueue(7);

	q.printQueue();
	q.dequeue();

	cout << q.front() << endl;

	q.dequeue();
	q.dequeue();

	cout << "QUEUE IS " << (q.empty() ? "EMPTY" : "NOT EMPTY") << endl;

	return 0;
}
