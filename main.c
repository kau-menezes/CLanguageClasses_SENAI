#include "banco.h"

int main ()
{
    int ans = 0;

    innit();

    while (1)
    {
        
        printf("\nQual operação deseja realizar agora?\n\n[1] Realizar depósito\n\n[2] Realizar saque\n\n[3] Sair do programa\n\nR: ");
        scanf("%d", &ans);

        switch (ans)
        {
        case 1:
            deposit();
            break;
        
        case 2:
            withdraw();
            break;

        case 3:
            break;

        default:
            printf("\nAAAAAAAAAAAAAAA");
            break;
        }

    if (ans == 3)
    {
        printf("\nPrograma encerrado.");
        break;
    }
    else
    {
        ;
    }
    
    }

    return 0;
}