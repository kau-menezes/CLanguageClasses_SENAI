#include <stdio.h>

int main()
{
    int array[6] = {1, 2, 3, 4, 5};

    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("%d %d\n", i, sum);
        sum = sum + array[i];
        
    }

}