#include <stdexcept>
#include <iostream>
#include <algorithm>

#ifndef ARRAYVECTOR_H
#define ARRAYVECTOR_H

template <typename T>
class arrayVector {
public:
	arrayVector();
	int size() const;
	bool empty() const;
	T& operator[](int i);
	T& at(int i) throw(std::out_of_range);
	void erase(int i);
	void insert(int i, const T& e);
	void reserve(int N);
	void printArray() const;
private:
	int capacity;
	int n;
	T* A;
};
#endif
