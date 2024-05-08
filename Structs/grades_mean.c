#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    char name[20];
    char course[20];
    char matriculation[20];
    float grade_1;
    float grade_2;

} Student;

int form_students(Student* array, char* name, char* course, char* matriculation, int grade1, int grade2, int i) {

    //adição de +1 por conta do "\n"
    strcpy(array[i].name, name);

    //adição de +1 por conta do "\n"
    strcpy(array[i].course, course);

    strcpy(array[i].matriculation, matriculation);

    array[i].grade_1 = grade1;
    array[i].grade_2 = grade2;

    return 0;

}

int print_report_card(FILE * file, int index, Student array[], float mean[])
{
    index--;

    fprintf(file, "=== BOLETIM DO(A) %s ===\n", array[index].name);
    fprintf(file, "\nNome: %s\n", array[index].name);
    fprintf(file, "\nCurso: %s\n", array[index].course);
    fprintf(file, "\nMatrícula: %s\n", array[index].matriculation);
    fprintf(file, "\nMÉDIA FINAL: %f", mean[index]);
    if(mean[index] >= 7) {
        fprintf(file, "\nRESULTADO: APROVADO(A)!");
    } else {
        fprintf(file, "\nRESULTADO: REPROVADO(A)!");
    }

}

int main() {
    Student array[3];
    Student student;

    char name[20], course[20], matriculation[20];
    float grade1, grade2;
    int choice;
    float mean[10];

    FILE * file = fopen("report_card.txt", "w");

    for (int i = 0; i < 3; i++) {

        printf("\nDigite o nome do %do aluno(a): ", i + 1);
        scanf("%s", name);

        printf("\nDigite o curso do %do aluno(a): ", i + 1);
        scanf("%s", course);

        printf("\nDigite a matrícula do %do aluno(a): ", i + 1);
        scanf("%s", matriculation);

        printf("\nDigite a primeira nota do %do aluno(a): ", i + 1);
        scanf("%f", &grade1);

        printf("\nDigite a segunda nota do %do aluno(a): ", i + 1);
        scanf("%f", &grade2);

        form_students(array, name, course, matriculation, grade1, grade2, i);

        mean[i] = ((grade1 * 1) + (grade2 * 2)) / 3; 
    }

    while (choice < 0 || choice > 10) 
    {
        printf("\nVocê deseja acessar o boletim de qual aluno? Digite de 1 a 10.\nR: ");
        scanf(" %d", &choice);

        if (choice < 0 || choice > 10)
        {
            printf("\nValor inválido! :(");
        }
    }

    print_report_card(file, choice, array, mean);

    fclose(file);

}