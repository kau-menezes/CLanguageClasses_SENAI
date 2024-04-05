#include <stdio.h>

char students_array[][20] = {"Matias", "Sampaio", "Cristian", "Wallace"}, course_array [][20] = {"Eng_Computaria", "Eng_Mechanics", "HighSchool", "HighSchool_SJP"};
int id_array[] = {0, 1, 2, 3}, grades_array[][3] = {{9, 7, 10}, {5, 10, 8}, {5, 6, 10}, {4, 6, 10}};


void search_student()
{
    int id = 0; 
    
    printf("\nDigite a ID do aluno: ");
    scanf("%d", &id);

    // busca no array pelo index da lista e retorna o valor:

    printf("\nID DO ALUNO: %d\n", id_array[id]);
    printf("NOME DO ALUNO: %s\n", students_array[id]);
    printf("CURSO DO ALUNO: %s", course_array[id]);

}

void add_student()
{


    int size = sizeof(students_array)/sizeof(students_array[0]); 
    char name_add[20] = "", course_add[20] = "";

    printf("\nDigite o nome do aluno: ");
    scanf("%s", name_add);
    printf("\nDigite o curso do aluno: ");
    scanf("%s", course_add);

    
    // adiciona os valores às listas correspondentes
    students_array[size][20] = &name_add;
    course_array[size][20] = &course_add;

    // inicia um for para receber um valor e adicioná-lo à lista de notas
    for (int i=0; i < 3; i++)
    {
        int grade = 0;
        printf("Digite a nota %d do aluno: ", i);
        scanf("%d", &grade);
        grades_array[size][i] = grade;

    }

    printf("%d\n", grades_array[size][0]);
    printf("%d\n", grades_array[size][1]);
    printf("%d\n", grades_array[size][2]);

    printf("%s\n", students_array[size]);
    printf("%s\n", course_array[size]);
    printf("%s\n", students_array[2]);
    printf("%s\n", course_array[2]);


}


int main()
{
    // search_student();

    add_student();
    return 0;
}
