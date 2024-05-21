#ifndef NODEQUEUE
#define NODEQUEUE

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

typedef struct 
{

    int size;
    Node* head;
    Node* tail;


} NodeQueue;

NodeQueue construct_queue() 
{
    NodeQueue newqueue;
    newqueue.size = 0;
    newqueue.head = NULL;
    newqueue.tail = NULL;

    return newqueue;
}

void enqueue (NodeQueue *queue, int value) 
{

    // chama o construtor da classe Node
    Node *newnode = construct_node(value);
    printf("\nDEU BOA mais ou menos COLEGA %d", newnode->value);

    if (queue->head == NULL) 
    {
        queue->head = newnode;
        queue->tail = newnode;
        queue->size++;
        return;
    }

    queue->tail->next = newnode;
    newnode->previous = queue->tail;
    queue->tail = newnode;
    queue->size++; 
}

#endif // !NODEQUEUE