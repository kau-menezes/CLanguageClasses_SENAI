#include <stdio.h>
#include <string.h>

int main()
{
    
    int num = 0, cont = 0;
    
    printf("Digite um número: ");
    printf("\nR: ");
    scanf("%d", &num);

    for (int i=1; i < num; i++)
    {
        cont = 0;
        for (int j = 1; j < num; j++)
        {

            if (i % j == 0)
            {
                cont++;
            }
        }

        if (cont <=2 )
        {
            printf("%d\n", i);
        }
    }
}