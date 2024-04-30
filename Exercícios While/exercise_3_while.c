#include <stdio.h>
// #include <unistd.h>

int main()
{
    
    int choice = 0;

    printf("Você deseja comprar...\n\n[1] Nuggets\n\n[2] Polenta\n\nR: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nProcesando compra...\n");
        for (int i = 1; i < 10; i++)
        {
            printf("#");
            sleep(1);
        }
        sleep(1);
        printf("\n\nNugguinhos adquiridos.");
        break;
    
    case 2:
        printf("\nProcesando compra...\n");
        for (int i = 1; i < 10; i++)
        {
            printf("#");
            sleep(1);
        }
        sleep(1);
        printf("\n\nPolentihna adquirida.");
        break;
    
    default:

        printf("A opção escolhida não está disponível e por isso o programa será encerrado. :( ");
        break;
    }
}