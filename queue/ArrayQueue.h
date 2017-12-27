#include <iostream>

template <typename E>
class Queue {
	enum { DEF_CAPACITY = 100 };
public:
	Queue(int cap = DEF_CAPACITY)
		: Q(new E[cap]), N(cap), f(0), r(0), n(0) { }
	
	int size() const {
		return n;
	}

	bool empty() const {
		return (n == 0);
	}

	const E& front() const {
		if(empty()) std::cout << "Queue is EMPTY\n";
		else return Q[f];
	}

	void enqueue(const E& e) {
		if(size() == N) std::cout << "Queue is FULL\n";
		else {
			Q[r] = e;
			r = (r + 1) % N;
			n = n + 1;
		}
	}

	void dequeue() {
		if(empty()) std::cout << "Queue is EMPTY\n";
		else {
			f = (f + 1) % N;
			n = n - 1;
		}
	}

	void printQueue() const {
		int temp = f;
		while(true) {
			std::cout << Q[temp];
			temp = (temp + 1) % N;
			if(temp == r) 
				break;
			std::cout << " - ";
		}
		std::cout << std::endl;
	}
private:
	E *Q;
	int f, r, n, N;
};
