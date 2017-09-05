#include <iostream>
#include <string>
#include "singly_linkedlist.h"

using namespace std;

int main(){
	StringLinkedList* list = new StringLinkedList();
	list->addFront("A");
	list->addFront("B");
	list->addFront("C");

	list->printList();

	list->removeFront();
	list->removeFront();

	list->printList();

	list->removeFront();

	if(list->empty())
		cout << "EMPTY\n";
	else
		cout << "NOT EMPTY\n";
}
