#include <stdio.h>

void DobrarValores(int *array, int size)
{

    for (int i=0; i < size; i++)
    {
        printf("Digite o valor do %do elemento do vetor: ", i+1);
        scanf("%d", &array[i]);
    }

    printf("\n=== Valores originais: \n\n");

    for (int i=0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }

    printf("\n=== Valores dobrados: \n\n");

    for (int i=0; i < size; i++)
    {
        array[i] *= 2;
    }

    for (int i=0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }
    
}

void main ()
{
    int arr[5];
    int tamanho = sizeof(arr) / sizeof(arr[0]); 
    DobrarValores(*arr, tamanho);
}