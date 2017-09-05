#include "singly_linkedlist.h"


StringLinkedList::StringLinkedList()
	: head(NULL) {
	}
StringLinkedList::~StringLinkedList(){
	while(!empty())
		removeFront();
}

bool StringLinkedList::empty() const{
	return head == NULL;
}

const string& StringLinkedList::front() const{
	return head->elem;
}

void StringLinkedList::addFront(const string& e){
	StringNode* v = new StringNode;
	v->elem = e;
	v->next = head;
	head = v;
}

void StringLinkedList::removeFront() {
	StringNode* old = head;
	head = head->next;
	delete old;
}

void StringLinkedList::printList() const {
	StringNode* current = head;
	while(current != NULL){
		cout << current->elem;
		if(current->next != NULL) cout << " --- ";
		current = current->next;
	}
	cout << endl;
}
