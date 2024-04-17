#include <stdio.h>
#include <stdlib.h>

int main()
{
    char names[3][20], name;

    for (int i = 0; i < 3; i++)
    {
        printf("\nDigite o nome do aluno(a) %d: ", i+1);
        scanf("%s", names[i]);

    }

    float grades[3][3], grade = 0, mean;

    for (int i = 0; i < 3; i++)
    {
        printf("\n=============== %s ===============\n", names[i]);
        for (int j = 0; j < 2; j++)
        {
            printf("Digite a nota %d do(a) aluno(a): ", j + 1);
            scanf("%f", &grade);
            grades[i][j] = grade;

        }
    }

    for (int i = 0; i < 3; i++)
    {
        
        mean = 0;

        for (int j = 0; j < 2; j++)
        {
            mean = mean + grades[i][j];
        }

        grades[i][2] = mean / 2;

    } 

    for(int i = 0; i < 3; i++)
    {
        printf("\n=============== MÉDIA FINAL DO(A) %s ===============\n", names[i]);

        for (int j = 0; j < 2; j++)
        {
            printf("\nNota %d: %.2f", j+1, grades[i][j]);
        }

        printf("\nMédia final: %.2f", grades[i][2]);
    }

}

