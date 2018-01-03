#include "array_vector.h"
#include "array_vector.cpp"
#include <iostream>
using namespace std;

int main() {
	arrayVector<int> arr;

	arr.insert(0, 7);
	arr.insert(0, 4);
	cout << arr.at(1) << endl;

	arr.printArray();

	arr.insert(2, 2);
//	cout << arr.at(3) << endl;

	arr.erase(1);
	arr.insert(1, 5);
	arr.insert(1, 3);
	arr.insert(4, 9);

	cout << arr.at(2) << endl;

	arr.printArray();

	return 0;
}
