#include <stdio.h>
#include <stdlib.h>

int double_value (int * ptr_p)
{
    *ptr_p = *ptr_p * 2;
    return 0;
}

int main()
{

    int var = 5;
    printf("\n%d", var);


    double_value(&var);
    printf("\n%d", var);
    printf("\n%x", &var);


}