#include <stdio.h>

int main()
{
    // int array[11] = {4564, 464, 78, 64, 45, 87, 6546, 55555, 789879954, 6}, helper = 0;
    int array[11] = {4564, 464, 78, 64, 45, 87789453, 6546, 55555, 789, 6, 987}, helper = 0;

    for (int i = 0; i < 10; i++)
    {
        helper = ((array[i]>helper) ? array[i] : helper);
        printf("%d - %d\n", array[i], helper);
    }

    printf("%d", helper);
    return 0;
}