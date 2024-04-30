#include <stdio.h>

int main ()
{
    
    int num = 0, choice = 0;
    
    printf("Digite um número até 20: ");
    scanf("%d", &num);

    if (num > 20)
    {
        printf("Número escolhido ultrapassou o número e o programa será encerrado. :(");
        return 0;
    }
    else
    {
        printf("Você deseja o desenho de um triângulo ou de um retângulo?\n\n[1] Triângulo\n\n[2] Retângulo\n\nR: ");
        scanf("%d", &choice);
        
        switch (choice)
        {

        case 1:

            printf("\n\n");

            for (int i = 1; i <= num; i++)
            {
                for (int j = 1; j <= i; j++)
                {
                    printf("#");
                }
                printf("\n");
            }

            printf("\n");

            break;

        case 2:
            for (int i = 1; i <= num; i++)
            {
                printf("#########################################################################################################\n");
            }

            break;
    
        default:
            printf("Opção escolhida não disponível e por isso o programa será encerrado. :(");
            break;
        }
    }
}