#ifndef FILA_STRUCT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int capacity;
    int size;
    int * array;


} Fila;

Fila  construct_fila(){
    Fila new_fila;
    new_fila.array = NULL;
    new_fila.capacity = 0;
    new_fila.size = 0;

    return new_fila;
}

void enqueue(Fila * fila,int value){

    if(fila->array == NULL){

        fila->capacity = 1;

        fila->array = (int*) malloc(fila->capacity * sizeof(int));

        fila->array[fila->size++] = value;

        return;

    }

    if(fila->capacity == fila->size + 1){
        
        fila->capacity *= 2;

        realloc ( fila->array, fila->capacity * sizeof(int));

    }
    
    fila->array[fila->size++] = value;
}


int dequeue(Fila * fila){

    int aux = fila->array[0];

    for(int i = 0; i < fila->size - 1; i++){

        fila->array[i] = fila->array[i+1];

    };

    return aux;
    
}

#endif // !FILA_STRUCT
