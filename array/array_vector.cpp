#include "array_vector.h"

template <typename T>
arrayVector<T>::arrayVector()
	:capacity(0), n(0), A(NULL) {}

template <typename T>
int arrayVector<T>::size() const {
	return n;
}

template <typename T>
bool arrayVector<T>::empty() const {
	return (n == 0);
}

template <typename T>
T& arrayVector<T>::operator[](int i) {
	return A[i];
}

template <typename T>
T& arrayVector<T>::at(int i) throw(std::out_of_range) {
	if(i < 0 || i >= n)
		throw std::out_of_range("Array out of bound"); 
	return A[i];
}

template <typename T>
void arrayVector<T>::erase(int i) {
	for(int j = i + 1; j < n; j++)
		A[j - 1] = A[j];
	n--;
}

template <typename T>
void arrayVector<T>::insert(int i, const T& e) {
	if(n >= capacity)
		reserve(std::max(1, 2 * capacity));
	for(int j = n - 1; j >= i; j--)
		A[j + 1] = A[j];
	A[i] = e;
	n++;
}

template <typename T>
void arrayVector<T>::reserve(int N) {
	if(capacity >= N) return;
	T* B = new T[N];
	for(int j = 0; j < n; j++)
		B[j] = A[j];
	if(A != NULL) delete [] A;
	A = B;
	capacity = N;
}

template <typename T>
void arrayVector<T>::printArray() const {
	for(int i = 0; i < n; ++i)
		std::cout << A[i] << (i != n - 1 ? " ": "");
    std::cout << std::endl;
}
