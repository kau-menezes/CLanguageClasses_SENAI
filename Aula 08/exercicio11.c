#include <stdio.h>

void InverterValor(int * array_p, int size_p)
{
    int helper = 0;

    for (int i=0; i<size_p/2; i++)
    {
        
        helper = array_p[i];
        array_p[i] = array_p[size_p - i -1];
        array_p[size_p - i-1] = helper;

    }
}

void main()
{
    int array[5] = {89, 54, 23, 15, 69};
    
    printf("\nOriginal array:\n");
    for (int i=0; i<5; i++)
    {
        printf("%d\n", array[i]);
    }

    int size = sizeof(array) / sizeof(array[0]);

    InverterValor(array, size);

    printf("\nModified array:\n");
    for (int i=0; i<5; i++)
    {
        printf("%d\n", array[i]);
    }
}