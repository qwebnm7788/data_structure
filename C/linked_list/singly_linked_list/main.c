#include "singly_linked_list.h"
#include "singly_linked_list.c"
#include <assert.h>
int main() {
	struct SNode* head = NULL;

	addFront(&head, 1);
	assert(head != NULL);

	addFront(&head, 2);
	addFront(&head, 3);

	printList(&head);

	removeFront(&head);
	removeFront(&head);

	printList(&head);

	removeFront(&head);

	if(empty(&head))
		printf("EMPTY\n");
	else
		printf("NOT EMPTY\n");

	return 0;
}
