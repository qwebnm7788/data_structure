#ifndef SNODE_H
#define SNODE_H

typedef int DATA;

typedef struct SNode {
    struct SNode* next;
    DATA data;
} SNode;

#endif
