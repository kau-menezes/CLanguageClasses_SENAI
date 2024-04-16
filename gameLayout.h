#ifndef gameLayout_h

#define gameLayout_h

#include <stdio.h>

int showMatrix(int array_p[][3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            if (array_p[i][j] == 3)
            {
                printf(" - ");
            }
            else if (array_p[i][j] == 1)
            {
                printf(" X ");
            }
            else
            {
                printf(" O ");
            }
        }
    }

    return 0;

}

int changeMatrix(int array_p[][3], int user_spot, int character)
{
    
    int row = user_spot / 3;
    int column = user_spot % 3;

    if (array_p[row][column] != 3)
    {
        printf("\nPosição já escolhida! Vez passada ao oponente.\n");
    } 
    else
    {
        array_p[row][column] = character;
        return 0;
    }
}

#endif