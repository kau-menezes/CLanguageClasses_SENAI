#include <stdio.h>
#include <stdlib.h>

#include "node.h"
#include "queue.h"
#include "stack.h"

int main() 
{
    // cira uma variável fila
    NodeQueue queue = construct_queue();
    NodeStack stack = construct_stack();

    for (int i = 1; i < 11; i++) 
    {
        enqueue(&queue, i);
        push(&stack, i*2);

    }

    // display(&queue);
    display_stack(&stack);
    pop(&stack);
    pop(&stack);
    display_stack(&stack);


    // dequeue(&queue);
    // dequeue(&queue);

    // display(&queue);


}