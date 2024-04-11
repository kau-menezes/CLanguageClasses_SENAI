#include <stdio.h>

int main ()
{
    char students[5][10] = {"Sampaio", "Cristian", "Matias", "Wallace", "Helena"};
    int grades[5][3] = {{ 3, 4, 5 }, 
                        { 6, 7, 8 }, 
                        { 10, 8, 7}, 
                        { 2, 3, 8 }, 
                        {9, 10, 10}};

    int choice = 0;

    printf("De qual aluno deseja consultar as notas?\n0 - Sampaio\n1 - Cristian\n2 - Matias\n3 - Wallace\n4 - Helena\nR: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nAluno(a): %s\n", students[choice]);

        for (int i = 0; i < 3; i++)
        {
            printf("\nNota %d: %d\n", i+1, grades[choice][i]);
        }

        break;
    
    case 2:
        printf("\nAluno(a): %s", students[choice]);

        for (int i = 0; i < 3; i++)
        {
            printf("\nNota %d: %d\n", i+1, grades[choice][i]);
        }
            break;

    case 3:
    printf("\nAluno(a): %s\n", students[choice]);

        for (int i = 0; i < 3; i++)
        {
            printf("\nNota %d: %d\n", i+1, grades[choice][i]);
        }
            break;

    case 4:
        printf("\nAluno(a): %s", students[choice]);

        for (int i = 0; i < 3; i++)
        {
            printf("\nNota %d: %d\n", i+1, grades[choice][i]);
        }
            break;

    case 5:    
        printf("\nAluno(a): %s", students[choice]);

        for (int i = 0; i < 3; i++)
        {
            printf("\nNota %d: %d\n", i+1, grades[choice][i]);
        }
            break;

    default:
    printf("aff");
        break;
    }

}