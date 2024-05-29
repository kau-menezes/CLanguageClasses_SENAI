#include <stdio.h>
#include <stdlib.h>

#include "node.h"
#include "queue.h"
#include "stack.h"
#include "copy.h"

int main() 
{

    /*********************************************************
                            EXERCÍCIO 1
    *********************************************************/

    // cira uma variável fila
    NodeQueue queue = construct_queue();
    NodeStack stack = construct_stack();
    
    int same_values[10];
    int different_values[10];
    int different_size[11];

    // adiciona na fila e pilha
    for (int i = 1; i < 11; i++) 
    {
        enqueue(&queue, i);
        push(&stack, i*2);
        same_values[i - 1] = i;
        different_values[i - 1] = i*2;
        different_size[i - 1] = i;
    }

    printf("%d", sizeof(same_values));

    // // mostra os valores
    // display(&queue);
    // display_stack(&stack);

    // // retira dois valores da fila e pilha
    // // dequeue(&queue);
    // // dequeue(&queue);

    // pop(&stack);
    // pop(&stack);

    // // mostra os valores
    // display(&queue);
    // printf("\n-----");
    // for (size_t i = 0; i < 10; i++)
    // {
    //     printf("\n%d KKKKKK", array[i]);
    // }
    
    // display_stack(&stack);

    /*********************************************************
                            EXERCÍCIO 2
    *********************************************************/
   
    int retorno1 = compare(&same_values, &queue);
    int retorno2 = compare(&different_values, &queue);
    int retorno3 = compare(&different_size, &queue);

    printf("\nRETORNO DA PRIMEIRA COMPARAÇÃO: %d - RETORNO DA SEGUNDA COMPARAÇÃO: %d - RETORNO DA TERCEIRA COMPARAÇÃO: %d", retorno1, retorno2, retorno3);
    


}