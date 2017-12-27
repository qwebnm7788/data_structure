#include "singly_linked_list.h"
#include "singly_linked_list.cpp"

int main() {
	SLinkedList<int> *list = new SLinkedList<int>();

	list->addFront(1);
	list->addFront(2);
	list->addFront(3);

	list->printList();

	list->removeFront();
	list->removeFront();

	list->printList();

	list->removeFront();

	std::cout << (list->empty() ? "EMPTY\n" : "NOT EMPTY\n");

	return 0;
}

