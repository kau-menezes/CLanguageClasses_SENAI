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

void push(NodeStack* stack, int value)
{
    // chama o construtor da classe Node
    Node *newnode = construct_node(value);

    if (stack->head == NULL) 
    {
        stack->head = newnode;
        stack->tail = newnode;
        stack->size++;
        return;
    }

    stack->tail->next = newnode;
    newnode->previous = stack->tail;
    stack->tail = newnode;
    stack->size++; 
}

void pop(NodeStack* stack) 
{

    stack->size--;
    stack->tail->previous->next = NULL;
    stack->tail = stack->tail->previous;

}

void peek (NodeStack* stack) 
{
    printf("\n%d", stack->tail->value);
}

void display_stack(NodeStack *stack) 
{

    Node* aux;
    aux = stack->head;
    printf("\n-------------");

    for (int i = 0; i < stack->size; i++) 
    {
        printf("\n%d", aux->value);
        aux = aux->next;
    }

}
#endif // !NODESTACK