#ifndef gameValidation_h
#define gameValidation_h
#include <stdio.h>

int validateWin (int array_p[][3])
{

    if (array_p[0][0] == array_p[1][0] && array_p[0][0] == array_p[2][0] && array_p[0][0] != 3)
    {
        return 1;
    }
    else if (array_p[0][1] == array_p[1][1] && array_p[0][1] == array_p[2][1] && array_p[0][1] != 3)
    {
        return 1;
    }
    else if (array_p[0][2] == array_p[1][2] && array_p[0][2] == array_p[2][2] && array_p[0][2] != 3)
    {
        return 1;
    }
    else if (array_p[0][0] == array_p[1][1] && array_p[0][0] == array_p[2][2] && array_p[0][0] != 3)
    {
        return 1;
    }
    else if (array_p[0][2] == array_p[1][1] && array_p[0][2] == array_p[2][0] && array_p[0][2] != 3)
    {
        return 1;
    }
    else if (array_p[0][0] == array_p[0][1] && array_p[0][0] == array_p[0][2] && array_p[0][0] != 3)
    {
        return 1;
    }
    else if (array_p[1][0] == array_p[1][1] && array_p[1][0] == array_p[1][2] && array_p[1][0] != 3)
    {
        return 1;
    }
    else if (array_p[2][0] == array_p[2][1] && array_p[2][0] == array_p[2][2] && array_p[2][0] != 3)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
#endif