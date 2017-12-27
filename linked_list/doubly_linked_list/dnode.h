#include <iostream>

#ifndef DNODE_H
#define DNODE_H

template <typename T>
class DNode {
	public:
		DNode()
			: prev(nullptr), next(nullptr) {}
		DNode(const T& value)
			: prev(nullptr), next(nullptr), data(value) {}
		~DNode() {}
		const T& getData() const { return data; }
		DNode<T> *getPrev() const { return prev; }
		DNode<T> *getNext() const { return next; }
		void setData(const T& value) { data = value; }
		void setPrev(DNode<T> *ptr) { prev = ptr; }
		void setNext(DNode<T> *ptr) { next = ptr; }
	private:
		T data;
		DNode<T> *prev;
		DNode<T> *next;
};

#endif
