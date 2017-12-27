#include <iostream>

template <typename E>
class ArrayStack {
	enum { DEF_CAPACITY = 100 };
public:
	ArrayStack(int cap = DEF_CAPACITY) 
		: S(new E[cap]), capacity(cap), t(-1) { }

	int size() const {
		return (t + 1);
	}

	bool empty() const {
		return (t < 0);
	}

	const E& top() const {
		if(empty()) std::cout << "STACK IS EMPTY\n";
		else return S[t];
	}

	void push(const E& e) {
		if(size() == capacity) std::cout << "STACK IS FULL\n";
		S[++t] = e;
	}

	void pop() {
		if(empty()) std::cout << "STACK IS EMPTY\n";
		--t;
	}

private:
	E *S;
	int capacity;
	int t;
};
