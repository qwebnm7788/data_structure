#include "singly_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

int size(struct SNode** head) {
    int count = 0;
    struct SNode* current = *head;
    while(current) {
        current = current->next;
        count++;
    }
    return count;
}

int empty(struct SNode** head) {
    return (head == NULL);
}

void addFront(struct SNode** head, DATA value) {
    struct SNode *node = (struct SNode*) malloc(sizeof(struct SNode));
    node->next = *head;
    node->data = value;
    *head = node;
}

void removeFront(struct SNode** head) {
    struct SNode *old = *head;
    *head = (*head)->next;
    free(old);
}

void printList(struct SNode** head) {
    struct SNode *current = *head;
    while(current) {
        printf("%d", current->data);
        if(current->next)
            printf(" - ");
        current = current->next;
    }
    puts("");
}
