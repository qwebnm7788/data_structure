#include "doubly_linked_list.h"
#include "doubly_linked_list.cpp"

int main() {
	DLinkedList<int> *list = new DLinkedList<int>();

	list->addFront(1);
	list->addFront(2);
	list->addBack(3);
	list->addBack(4);

	//expect 2 - 1 - 3 - 4
	list->printList();

	list->removeFront();
	list->removeBack();

	//expect 1 - 3
	list->printList();

	std::cout << (list->empty() ? "EMPTY\n" : "NOT EMPTY\n");

	return 0;
}
