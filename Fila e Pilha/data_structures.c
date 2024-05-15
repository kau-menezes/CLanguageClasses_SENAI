#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "pilha_struct.h"
#include "fila_struct.h"

int main() {

    Fila fila = construct_fila();

    enqueue(&fila,5);
    enqueue(&fila,4);
    enqueue(&fila,3);
    enqueue(&fila,2);
    enqueue(&fila,1);
    enqueue(&fila,0);

    printf("\nRetirado da fila: %i",dequeue(&fila));
    printf("\nRetirado da fila: %i",dequeue(&fila));
    printf("\nRetirado da fila: %i",dequeue(&fila));
    printf("\nRetirado da fila: %i",dequeue(&fila));
    printf("\nRetirado da fila: %i",dequeue(&fila));
    printf("\nRetirado da fila: %i",dequeue(&fila));

    Pilha pilha = construct_pilha();

    push(&pilha,5);
    push(&pilha,4);
    push(&pilha,3);
    push(&pilha,2);
    push(&pilha,1);
    push(&pilha,0);

    printf("\n======================");

    printf("\nRetirado da pilha: %i",pop(&pilha));
    printf("\nRetirado da pilha: %i",pop(&pilha));
    printf("\nRetirado da pilha: %i",pop(&pilha));
    printf("\nRetirado da pilha: %i",pop(&pilha));
    printf("\nRetirado da pilha: %i",pop(&pilha));
    printf("\nRetirado da pilha: %i",pop(&pilha));

}