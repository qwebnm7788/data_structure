#include "snode.h"

#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

int size(struct SNode** head);
int empty(struct SNode** head);
void addFront(struct SNode** head, DATA value);
void removeFront(struct SNode** head);
struct SNode* front(struct SNode** head);
void printList(struct SNode** head);

#endif
