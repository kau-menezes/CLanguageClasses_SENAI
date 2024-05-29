#include <stdio.h>
#include <stdlib.h>

#include "node.h"
#include "queue.h"
#include "stack.h"

int main() 
{
    // cira uma variável fila
    NodeQueue queue = construct_queue();

    for (int i = 1; i < 11; i++) 
    {
        enqueue(&queue, i);

    }

    display(&queue);

    dequeue(&queue);
    dequeue(&queue);

    display(&queue);


}