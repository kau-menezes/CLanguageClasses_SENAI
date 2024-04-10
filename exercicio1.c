#include <stdio.h>

void main ()
{
    int array[5];

    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", array[i]);
    }


}
