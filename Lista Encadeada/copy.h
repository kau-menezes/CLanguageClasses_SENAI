#ifndef COPY
#define COPY

#include "node.h"
#include "queue.h"
#include "stack.h" 

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

#endif // !COPY