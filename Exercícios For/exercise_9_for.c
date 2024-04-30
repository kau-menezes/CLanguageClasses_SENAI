#include <stdio.h>

int main ()
{

    int num1 = 0, num2 = 0, sum = 0, mean = 0;
    
    printf("Com quantos números deseja realizar a média: ");
    scanf("%d", &num1);

    for (int i = 1; i <= num1; i++)
    {
        printf("\nDigite o número %d: ", i);
        scanf("%d", &num2);
        sum = sum + num2;

    }
    printf("%d", sum);
    mean = sum / num1;
    printf("\nA média dos números escolhidos é de: %d", mean);
    
}
