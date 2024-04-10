#include <stdio.h>

int somarVetor (int *array_p, int size_p)
{
    
    int sum = 0;
    
    for (int i=0; i < size_p; i++)
    {
        sum += array_p[i];
    }

    return sum;
}


void main ()
{
    int array[5]= {5, 13, 78, 67, 45};

    int size = sizeof(array) / sizeof (array[3]);

    printf("Soma dos elementos do vetor: %d", somarVetor(array, size)); 

}