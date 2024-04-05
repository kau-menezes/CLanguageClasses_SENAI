#include <stdio.h>

int main ()
{
    char *array[3] = {"Kau", "Mumu"};

    for ( int i = 0; i < 3; i++ )
        printf("String %d : %s\n", i+1, array[i] );

    printf("\n");

    char **ptr = array;

    ptr[2] = "Nico";

    for ( int i = 0; i < 3; i++ )
        printf("String %d : %s\n", i+1, ptr[i] );


   
}