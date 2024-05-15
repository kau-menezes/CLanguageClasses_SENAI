#ifndef PILHA_STRUCT
#define PILHA_STRUCT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int * array;
    int quantity;
    int capacity;

} Pilha;

Pilha construct_pilha () {
    Pilha new_pilha;
    new_pilha.array = NULL;
    new_pilha.capacity = 0;
    new_pilha.quantity = 0;

    return new_pilha;
}

void push(Pilha * pilha, int value) {

    if (pilha->array == NULL) {
        
        pilha->capacity++;
        pilha->array = (int *) malloc(pilha->capacity * sizeof(int));

        pilha->array[pilha->quantity++] = value;

        return;
    }

    if (pilha->capacity == pilha->quantity) {
        
        pilha->capacity *= 2;
        (int *) realloc(pilha->array, pilha->capacity * sizeof(int));

    }

    pilha->array[pilha->quantity++] = value;

}

int pop(Pilha * pilha) {

    int aux = pilha->array[pilha->quantity - 1];
    pilha->quantity--;

    return aux;

}

#endif // !PILHA_STRUCT