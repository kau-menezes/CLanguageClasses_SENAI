# include <stdio.h>

int main()
{
    int array[2][2], user_choice;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {        
        printf("\n Digite o número %d da matriz: ", i + j);
        scanf("%d", &user_choice);

        array[i][j] = user_choice;

        }

    }

    
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j < 2; j++)
        {
            printf("%d", array[i][j]);
        }
    }
}