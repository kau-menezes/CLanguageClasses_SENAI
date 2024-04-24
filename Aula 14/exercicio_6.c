#include <stdio.h>
#include <stdlib.h>

int * compare (int * array1_p, int * array2_p, int amount_p,int *size_result)
{
    int size = 0;
    int * result_p = NULL;
    //printf("\n%d -", size);
    
    for (int i = 0; i < amount_p; i++)
    {
        //printf("\n%d - %d", array1_p[i], array2_p[i]);
        
        if (array1_p[i] == array2_p[i])
        {
            //printf("\n%d - %d", array1_p[i], array2_p[i]);
            size++;

            if (!(result_p))
            {
            result_p = malloc(size * sizeof(int));
            }
            else
            {
                realloc(result_p, size * sizeof(int));
            }
            
            result_p[size-1] = array1_p[i];
            //printf("\n%d - %d", result_p[size-1], size);

        }
        else
        {
            printf("\nAAAAAAA");
        }
    }
    *size_result = size;
    return result_p;
}


int main()
{

    int amount = 0, * array1, * array2, *result, size_result = 0;

    printf("\nType below the amount of elements you desire the arrays to have.\nR: ");
    scanf("%d", &amount);
    printf("\n%d - amount\n", amount);

    array1 = malloc(amount * sizeof(int));
    array2 = malloc(amount * sizeof(int));

    for (int j = 0; j < amount; j++)
    {
        printf("\nType the value for the element n. %d of the first array: ", j + 1);
        scanf("%d", &array1[j]);
    }
    
    for (int i = 0; i < amount; i++)
    {
        printf("\nType the value for the element n. %d of the second array: ", i + 1);
        scanf("%d", &array2[i]);
    }

    result = compare(array1, array2, amount,&size_result);
    
    printf("\nEqual elements between the arrays: ");
    for (int i = 0; i < size_result; i++)
    {
        printf("\n%d", result[i]);
    }

}