#include <stdio.h>

int main()
{
    int num_user = 0, cont = 0;
    srand(time(NULL));
    int r = rand() % 1000;
    
    printf("\n\n === %d ===\n\n", r);

    while (r != num_user)
    {   
        printf("Digite seu chute: ");
        scanf("%d", &num_user);

        if (num_user != r)
        {
            printf("\n\nVocê errou! Tente novamente!\n\n");
            cont++;
        }
    }