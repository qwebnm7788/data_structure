#include "doubly_linked_list.h"

template <typename T>
DLinkedList<T>::DLinkedList() {
	header = new DNode<T>();
	trailer = new DNode<T>();
	header->setNext(trailer);
	trailer->setPrev(header);
}

template <typename T>
DLinkedList<T>::~DLinkedList() {
	while(!empty()) removeFront();
	delete header;
	delete trailer;
}

template <typename T>
bool DLinkedList<T>::empty() const {
	return (header->getNext() == trailer);
}

template <typename T>
const T& DLinkedList<T>::front() const {
	return (header->getNext()->getData());
}

template <typename T>
const T& DLinkedList<T>::back() const {
	return (trailer->getPrev()->getData());
}

template <typename T>
void DLinkedList<T>::add(DNode<T> *v, const T& value) {
	DNode<T> *node = new DNode<T>(value);
	node->setNext(v);
	node->setPrev(v->getPrev());
	v->getPrev()->setNext(node);
	v->setPrev(node);
}

template <typename T>
void DLinkedList<T>::addFront(const T& value) {
	add(header->getNext(), value);
}

template <typename T>
void DLinkedList<T>::addBack(const T& value) {
	add(trailer, value);
}

template <typename T>
void DLinkedList<T>::remove(DNode<T> *v) {
	DNode<T> *u = v->getPrev();
	DNode<T> *w = v->getNext();
	u->setNext(w);
	w->setPrev(u);
	delete v;
}

template <typename T>
void DLinkedList<T>::removeFront() {
	remove(header->getNext());
}

template <typename T>
void DLinkedList<T>::removeBack() {
	remove(trailer->getPrev());
}

template <typename T>
void DLinkedList<T>::printList() const {
	DNode<T> *node = header->getNext();
	while(node != trailer) {
		std::cout << node->getData();
		if(node->getNext() != trailer)
			std::cout << " - ";
		node = node->getNext();
	}
	std::cout << std::endl;
}

