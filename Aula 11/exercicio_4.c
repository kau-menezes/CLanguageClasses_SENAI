#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int first_array[2][3], second_array[2][3], user_choice = 0, first_sum = 0, second_sum = 0;
    
    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 3; j++)
        {        
        printf("\nDigite o %do número da %da linha da primeira matriz: ", j+1, i+1);
        scanf("%d", &user_choice);

        first_array[i][j] = user_choice;
        }
    }

    for (int i = 0; i < 2; i++)
    {
        
        for (int j = 0; j < 3; j++)
        {        
        printf("\nDigite o %do número da %da linha da segunda matriz: ", j+1, i+1);
        scanf("%d", &user_choice);

        second_array[i][j] = user_choice;
        }
    }


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            first_sum = first_sum + first_array[i][j];
        }      

    }

        for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            first_sum = first_sum + first_array[i][j];
        }      

    }

    
    printf("\n=============== PRIMEIRA MATRIZ ===============\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", first_array[i][j]);
        }
    }
    
    printf("\n=============== SEGUNDA MATRIZ ===============\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", second_array[i][j]);
        }
    }

    printf("\n=============== SOMA TOTAL DAS MATRIZES ===============\n");
    printf("%d", first_sum + second_sum);


}