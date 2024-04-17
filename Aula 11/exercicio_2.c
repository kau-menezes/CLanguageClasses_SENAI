#include <stdio.h>
#include <stdlib.h>

int main()
{

    int array[2][4];
    printf("%d - %d", sizeof(array), sizeof(array[0][0]));

}