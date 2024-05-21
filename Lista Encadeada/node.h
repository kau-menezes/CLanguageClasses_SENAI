#ifndef NODE
#define NODE

#include <stdio.h>
#include <stdlib.h>

typedef struct  Node Node;

struct  Node {

    int value;
    Node* next;
    Node* previous;

};

Node* construct_node (int value) 
{
    Node* newnode = (Node*) malloc(sizeof(Node));

    newnode->value = value;
    newnode->next = NULL;
    newnode->previous = NULL;

    return newnode;
}

#endif // !NODE