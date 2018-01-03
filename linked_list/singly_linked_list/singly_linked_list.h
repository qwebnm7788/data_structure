#include "snode.h"

#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

template <typename T>
class SLinkedList {
public:
	SLinkedList();
	~SLinkedList();
	int size() const;
	bool empty() const;
	void addFront(const T& value);
	void removeFront();
	const T& front() const;
	void printList() const;
private:
	SNode<T> *head;
};

#endif
