#include "dnode.h"

#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

template <typename T>
class DLinkedList {
public:
	DLinkedList();
	~DLinkedList();
	bool empty() const;
	const T& front() const;
	const T& back() const;
	void addFront(const T& value);
	void addBack(const T& value);
	void removeFront();
	void removeBack();
	void printList() const;
private:
	DNode<T> *header;
	DNode<T> *trailer;
protected:
	void add(DNode<T> *v, const T& value);
	void remove(DNode<T> *v);
};

#endif
