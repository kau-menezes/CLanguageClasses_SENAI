#include <stdio.h>

int main ()
{
    int num1 = 0, num2 = 0, num3 = 0, sum = 0;

    while (sum < 45)
    {
        for (int i = 1; i <= 3; i++)
        {
            printf("\nDigite o número %d: ", i);
            scanf("%d", &num1);
            sum = sum + num1;
        }

            if (sum<45)
            {
                printf("\n\nValor total não atingido. Tentando novamente!\n");
            }
    }

    printf("\n\nPrograma encerrado!");
    return 0;
}
