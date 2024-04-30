#include <stdio.h>

int main ()
{
    
    int array[5] = {1, 2, 3, 4, 5};

    for (int i=0; i< 5; i++)
    {
        printf("%d\n", array[i]);
    }

    int * ptr = &array[2];
    
    *ptr = 8;

    for (int i=0; i< 5; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}