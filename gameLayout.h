#ifndef gameLayout_h

#define gameLayout_h

#include <stdio.h>

int showMatrix(int ** array_p)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array_p[i][j] == 0)
            {
                printf("   ");
            }
            else if (array_p[i][j] == 1)
            {
                printf(" O ");
            }
            else
            {
                printf(" x ");
            }
        }
    }

    return 0;

}

int changeMatrix(int ** array_p, int user_spot, int character)
{
    
    int row = user_spot / 2;
    int column = (3 * row) + user_spot % 3;

    if (array_p[row][column] != 0)
    {
        return 1;
    } 
    else
    {
        array_p[row][column] = character;
        return 0;
    }
}

#endif