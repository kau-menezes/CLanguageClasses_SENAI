#include <stdio.h>
#include <stdlib.h>

int main()
{

    int rows = 0, columns = 0;
    
    printf("\nDigite o número de linhas: ");
    scanf("%d", &rows);
    printf("\nDigite o número de colunas: ");
    scanf("%d", &columns);

    int ** array = malloc(rows * columns * sizeof(int));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("\nDigite o %do número da %da linha: ", j+1, i+1 );
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nMatriz finalizada: ");
    for (int i = 0; i < rows; i++)
    {
        printf("\n");
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", array[i][j]);
        }
    }
}