#include <iostream>

#ifndef NODELIST_H
#define NODELIST_H

template <typename T>
class NodeList {
private:
	struct Node {
		T elem;
		Node* prev;
		Node* next;
	};
public:
	class Iterator {
	public:
		T& operator*();
		bool operator==(const Iterator& p) const;
		bool operator!=(const Iterator& p) const;
		Iterator& operator++();
		Iterator& operator--();
		friend class NodeList;
	private:
		Node* v;
		Iterator(Node* u);
	};
public:
	NodeList();
	int size() const;
	bool empty() const;
	Iterator begin() const;
	Iterator end() const;
	void insertFront(const T& e);
	void insertBack(const T& e);
	void insert(const Iterator& p, const T& e);
	void eraseFront();
	void eraseBack();
	void erase(const Iterator& p);
	void printList() const;
private:
	int n;
	Node* header;
	Node* trailer;
};

#endif
