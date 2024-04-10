#include <stdio.h>

int flag = 0;

int EncontrarIndice(int *array, int size, int search)
{
    
    for (int i = 0; i <= size; i++)
    {
        if (search == array[i])
        {
            printf("Value found at index %d", i);
            flag = 1;
            return 0;
        }
        else 
        {
            continue;
        }
    }

    if (flag == 0)
    {
        printf("-1");
    }
}

void main ()
{
    int nums[10] = {45, 67, 89, 3, -1, 3, 967, 4856, 1320, 3123};
    int user_num = 0;

    int tamanho = sizeof(nums) / sizeof (nums[0]);

    printf("Type the number you desire to search for: ");
    scanf("%d", &user_num);

    EncontrarIndice(nums, tamanho, user_num);
}