#include <stdio.h>

void MaiorElemento(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Digite o valor do elemento %d do vetor: ", i);
        scanf("%d", &array[i]);
    }

    int helper = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > helper)
        {
            helper = array[i];
        }
    }

    printf("O maior elemento do vetor é: %d\n", helper);
}

int main()
{
    int array[5];
    int size = sizeof(array) / sizeof(array[0]); 
    MaiorElemento(array, size);
    return 0;
}