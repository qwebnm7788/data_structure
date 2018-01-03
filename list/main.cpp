#include "node_list.h"
#include "node_list.cpp"

#include <iostream>
using namespace std;

int main() {
	NodeList<int> list;

	list.insertFront(8);

	NodeList<int>::Iterator p = list.begin();
	cout << *p << endl;

	list.insertBack(5);
	NodeList<int>::Iterator q = p;

	++q;
	cout << *q << endl;

	cout << (p == list.begin() ? "True" : "False") << endl;

	list.insert(q, 3);
	list.printList();							//expected output : (8, 3, 5)

	*q = 7;

	list.insertFront(9);						//expected output : (9, 8, 3, 7)
	list.eraseBack();

	list.erase(p);

	list.eraseFront();
	list.printList();							//expected output : (3)
	return 0;
}
