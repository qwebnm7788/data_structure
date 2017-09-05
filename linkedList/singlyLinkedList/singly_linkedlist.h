#include <iostream>
#include <string>
using namespace std;

class StringNode {
	private:
		string elem;
		StringNode* next;
		
		friend class StringLinkedList;
};

class StringLinkedList {
	public:
		StringLinkedList();
		~StringLinkedList();
		bool empty() const;
		const string& front() const;
		void addFront(const string& e);
		void removeFront();
		void printList() const;
	private:
		StringNode* head;
};
