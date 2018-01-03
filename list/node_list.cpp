#include "node_list.h"

template <typename T>
NodeList<T>::Iterator::Iterator(Node* u) {
	v = u;
}

template <typename T>
T& NodeList<T>::Iterator::operator*() {
	return v->elem;
}

template <typename T>
bool NodeList<T>::Iterator::operator==(const Iterator& p) const {
	return (v == p.v);
}

template <typename T>
bool NodeList<T>::Iterator::operator!=(const Iterator& p) const {
	return (v != p.v);
}

template <typename T>
typename NodeList<T>::Iterator& NodeList<T>::Iterator::operator++() {
	v = v->next;
	return *this;
}

template <typename T>
typename NodeList<T>::Iterator& NodeList<T>::Iterator::operator--() {
	v = v->prev;
	return *this;
}

template <typename T>
NodeList<T>::NodeList() {
	n = 0;
	header = new Node;
	trailer = new Node;
	header->next = trailer;
	trailer->prev = header;
}

template <typename T>
int NodeList<T>::size() const {
	return n;
}

template <typename T>
bool NodeList<T>::empty() const {
	return (n == 0);
}

template <typename T>
typename NodeList<T>::Iterator NodeList<T>::begin() const {
	return Iterator(header->next);
}

template <typename T>
typename NodeList<T>::Iterator NodeList<T>::end() const {
	return Iterator(trailer);
}
template <typename T>
void NodeList<T>::insertFront(const T& e) {
	insert(begin(), e);
}

template <typename T>
void NodeList<T>::insertBack(const T& e) {
	insert(end(), e);
}

template <typename T>
void NodeList<T>::insert(const Iterator& p, const T& e) {
	Node* w = p.v;
	Node* u = w->prev;
	Node* v = new Node;
	v->elem = e;

	v->next = w; v->prev = u;
	u->next = v;
	w->prev = v;
	n++;
}

template <typename T>
void NodeList<T>::eraseFront() {
	erase(begin());
}

template <typename T>
void NodeList<T>::eraseBack() {
	erase(--end());
}

template <typename T>
void NodeList<T>::erase(const Iterator& p) {
	Node* v = p.v;
	Node* u = v->prev;
	Node* w = v->next;

	u->next = w; v->prev = u;
	delete v;
	n--;
}

template <typename T>
void NodeList<T>::printList() const {
	for(Iterator it = begin(); it != end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}
