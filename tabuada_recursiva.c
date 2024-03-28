#include <stdio.h>

int function (int num, int i)
{
    
    if (i>10)
    {
        printf("\nTABUADA FINALIZADA.");
        return 1;
    }
    else
    {
    printf("\n%d VEZES %d = %d", num, i, num*i);
    }
    i++;
    return function(num, i);
}

int main ()
{
    function(5, 1);
}