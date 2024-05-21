#ifndef STACK
#define STACK

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

typedef struct {

    int size;
    Node* head;
    Node* tail;


} NodeStack;

NodeStack construct_stack () {
    NodeStack newstack;
    newstack.size = 0;
    newstack.head = NULL;
    newstack.tail = NULL;

    return newstack;
}

void push() {}

void pop() {}

void peek () {}

#endif // !NODESTACK