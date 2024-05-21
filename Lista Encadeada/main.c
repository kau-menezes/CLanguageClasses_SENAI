#include <stdio.h>
#include <stdlib.h>

#include "node.h"
#include "queue.h"
#include "stack.h"

int main() 
{
    // cira uma variável fila
    NodeQueue queue = construct_queue();
    enqueue(&queue, 8);
    enqueue(&queue, 7);
    dequeue(&queue);


}