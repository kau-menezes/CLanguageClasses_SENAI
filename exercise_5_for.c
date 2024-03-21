#include <stdio.h>

int main()
{
    int num = 0, result = 0;

    printf("Digite um número até 100: ");
    scanf("%d", &num);

    if (num > 100)
    {
        printf("Número escolhido ultrapassou o número e o programa será encerrado. :(");
        return 0;
    }
    else 
    {
        printf("\n=== MÚLTIPLOS DE %d ===\n", num);
    
        for (int i = 1; result + num < 100; i++)
        {
        result = i * num;
        printf("%d\n", result);
        }
    }
}