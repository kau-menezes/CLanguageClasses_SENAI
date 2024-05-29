#ifndef COPY
#define COPY

#include <stdio.h>
#include <stdlib.h>

#include "../Estruturas/node.h"
#include "../Estruturas/queue.h"
#include "../Estruturas/stack.h" 

// PARA O EXERÍCIO 4
int compare (int* array, NodeQueue* queue) {

    //  if ((sizeof(array)/sizeof(int)) != queue->size) 
    // {
    //     printf("\n%d %d - %d", sizeof(array), sizeof(int), queue->size);
    //     printf("\ntamanho diferente tio");
    //     return 1; // RETORNO = 1 :: DIFERENTE
    // }

    Node* aux;
    aux = queue->head;

    for (int i = 0; i < queue->size; i++) 
    {
        printf("\n%d - %d", array[i], aux->value);

        if(array[i] != aux->value) 
        {
            
            return 1;
        }

        aux = aux->next;
    }

    return 0;

}

// PARA O EXERCÍCIO 2

int* linkedlist_to_array(NodeQueue* queue)
{

    int* array;

    array = (int*) malloc(queue->size);

    Node* aux;
    aux = queue->head;

    for (int i = 0; i < queue->size; i++) 
    {
        array[i] = aux->value;
        aux = aux->next;
    }

    return array;

}

// PARA O EXERCÍCIO 3

NodeQueue array_to_linkedlist(int* array, int size)
{

    NodeQueue newqueue = construct_queue();

    for (int i = 0; i < size; i++)
    {
        enqueue(&newqueue, array[i]);
    }

    return newqueue;

}


#endif // !COPY