#include <stdio.h>
#include <stdlib.h>

int print_array_test(int *array,int size)
{
    if (size == 0)
    {
        printf("\nFim do array.\n");
        return 0 ;
    }
    
    // recebe o endereço do meu vetor e printa o primeiro índice
    printf("%i\n", array[0]);

    //soma uma unidade ao endereço do meu vetor, que crescerá em 4bytes
    print_array_test(array + 1, size - 1);
}

int count_numbers(int * array_p, int size, int * sum_p)
{
    
    for (int i = 0; i < size; i++)
    {
        if (array_p[i] % 2 == 1)
        {
            *sum_p += array_p[i];
        }
    }

}


int main()
{
    int choice = 0, sum = 0;

    printf("\nDigite o número de itens do seu vetor: ");
    scanf("%d", &choice);

    int * array = malloc(choice * sizeof(int));

    for (int i = 0; i < choice; i++)
    {
        printf("\nDigite o valor do %d valor: ", i + 1);
        scanf("%d", &array[i]); 
    }
    
    printf("\nValores do vetor: \n\n");
    
    // array é um ponteiro que armazena o endereço do primeiro slot de um vetor de tamanho x
    print_array_test(array, choice);

    printf("\nSoma de todos os números ímpares do vetor: \n");
    count_numbers(array, choice, &sum);
    printf("\n%d", sum);

    free(array);
    return 0;
}
