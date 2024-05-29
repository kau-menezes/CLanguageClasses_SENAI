#include <stdio.h>
#include <stdlib.h>

#include "Estruturas/node.h"
#include "Estruturas/queue.h"
#include "Estruturas/stack.h"
#include "Outras/copy.h"

int main() 
{

    /*********************************************************
                            EXERCÍCIO 1
    *********************************************************/

    // cira uma variável fila
    NodeQueue queue = construct_queue();
    NodeStack stack = construct_stack();

    // adiciona na fila e pilha
    for (int i = 1; i < 11; i++) 
    {
        enqueue(&queue, i);
        push(&stack, i*2);
    }

    // // mostra os valores
    printf("\n----------------------------\nVALORES INICIAIS:\n----------------------------\n ");
    display(&queue);
    printf("\n----------------------------");
    display_stack(&stack);

    // // retira dois valores da fila e pilha
    dequeue(&queue);
    dequeue(&queue);

    pop(&stack);
    pop(&stack);

    // // mostra os valores
    printf("\n----------------------------\nVALORES ATUALIZADOS:\n----------------------------\n ");
    display(&queue);
    printf("\n----------------------------");
    display_stack(&stack);

    /*********************************************************
                            EXERCÍCIO 2
    *********************************************************/

    printf("\n----------------------------\nARRAY CRIADO DE UMA LISTA ENCADEADA:\n----------------------------:\n ");

   // instancia as estruturas
    NodeQueue motherqueue =  construct_queue();
    int* arrayoffspring;

    // adiciona na fila os valores
    for (int i = 1; i < 11; i++) 
    {
        enqueue(&motherqueue, i*2);
    }

    // atribui ao ponteiro array o ponteiro do novo array criado
    arrayoffspring = linkedlist_to_array(&motherqueue);

    // printa os valores do novo array

    for(int i = 0; i < motherqueue.size; i++) 
    {
        printf("\n%d", arrayoffspring[i]);
    }

    /*********************************************************
                            EXERCÍCIO 3
    *********************************************************/

    printf("\n----------------------------\nLISTA ENCADEADA DE UM ARRAY:\n----------------------------\n ");

    NodeQueue queueoffspring = construct_queue();
    int *motherarray;
    int size = 5;

    // aloca memória abseada no size
    motherarray =  malloc(5 * sizeof(int));

    // atribui valores ao array
    for (int i = 0; i < size; i++) 
    {
        motherarray[i] = i+1 * 3;
    }

    // chama a função pra cuidar da tarefa
    queueoffspring = array_to_linkedlist(motherarray, size);

    // display
    display(&queueoffspring);

    /*********************************************************
                            EXERCÍCIO 4
    *********************************************************/
   
    NodeQueue comparedqueue = construct_queue();
    int same_values[10];
    int different_values[10];

    for (int i = 1; i < 11; i++) 
    {
        enqueue(&comparedqueue, i);
        same_values[i - 1] = i;
        different_values[i - 1] = i * 2;
    }

    int equalcomparation = compare(&same_values, &comparedqueue);
    int differentcomparation = compare(&different_values, &comparedqueue);


    printf("\n\nRETORNO DA PRIMEIRA COMPARAÇÃO: %d\nRETORNO DA SEGUNDA COMPARAÇÃO: %d", equalcomparation, differentcomparation);

}