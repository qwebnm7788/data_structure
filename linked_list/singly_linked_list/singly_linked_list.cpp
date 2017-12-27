#include "singly_linked_list.h"

template <typename T>
SLinkedList<T>::SLinkedList()
	: head(nullptr) {}

template <typename T>
SLinkedList<T>::~SLinkedList() {
	while(!empty()) removeFront();
}

template <typename T>
int SLinkedList<T>::size() const {
	int size = 0;
	
	SNode<T> *current = head;
	while(current) {
		current = current->getNext();
		size++;
	}

	return size;
}

template <typename T>
bool SLinkedList<T>::empty() const {
	return (head == nullptr);
}

template <typename T>
void SLinkedList<T>::addFront(const T& value) {
	SNode<T> *node = new SNode<T>(value);
	node->setNext(head);
	node->setData(value);
	head = node;
}

template <typename T>
void SLinkedList<T>::removeFront() {
	SNode<T> *old = head;
	head = head->getNext();
	delete old;
}

template <typename T>
const T& SLinkedList<T>::front() const {
	return head->getData();
}

template <typename T>
void SLinkedList<T>::printList() const {
	SNode<T> *current = head;
	while(current) {
		std::cout << current->getData();
		if(current->getNext())
			std::cout << " - ";
		current = current->getNext();
	}
	std::cout << std::endl;
}


