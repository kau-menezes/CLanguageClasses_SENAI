#include <stdio.h>

int main()
{
    int array[4][4], user_choice = 0, sum = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {        
        printf("\nDigite o número %d da matriz: ", i + j);
        scanf("%d", &user_choice);

        array[i][j] = user_choice;

        }

    }

    for (int i = 0; i < 4; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++)
        {
            printf("%d", array[i][j]);
        }
    }
    
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {  
            printf("\n%d - %d", sum, array[i][j]);
            sum = sum + array[i][j];
        }      
    }

    printf("\nTotal da soma dos elementos da matriz: %d", sum);

}

