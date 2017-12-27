#include <iostream>

#ifndef SNODE_H
#define SNODE_H

template <typename T>
class SNode {
	public:
		SNode(const T& value)
			: next(nullptr), data(value) {}
		~SNode() {}
		const T& getData() const { return data; }
		SNode<T> *getNext() const { return next; }
		void setData(const T& value) { data = value; }
		void setNext(SNode<T> *ptr) { next = ptr; }
	private:
		T data;
		SNode<T> *next;
};

#endif
