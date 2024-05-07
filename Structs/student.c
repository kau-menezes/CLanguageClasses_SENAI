#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    char* name[20];
    char* course[20];
    char* matriculation[20];

} Student;

int form_students(Student* array, char* name, char* course, char* matriculation, int i) {

    //adição de +1 por conta do "\n"
    strcpy(array[i].name, name);

    //adição de +1 por conta do "\n"
    strcpy(array[i].course, course);

    strcpy(array[i].matriculation, matriculation);

    return 0;

}

int register_students(FILE* file, Student* array) {

    fprintf(file, "=== REGISTRO DE ALUNOS ===");

    for (int i = 0; i < 5; i++) {
        
        fprintf(file, "\n=== ALUNO n° %d ===\n", i + 1);
        fprintf(file, "\nNOME: %s", array[i].name);
        fprintf(file, "\nMATRÍCULA: %s", array[i].matriculation);
        fprintf(file, "\nCURSO: %s\n", array[i].course);

    }

    return 0;
}

int main() {

    Student array[5];
    Student student;

    char name[20], course[20], matriculation[11]; 

    FILE * file = fopen("students_registration.txt", "w");

    for(int i = 0; i < 5; i++) {
        printf("\nDigite o nome do %do aluno(a): ", i +1);
        scanf("%s", name);

        printf("\nDigite o curso do %do aluno(a): ", i + 1);
        scanf("%s", course);

        printf("\nDigite a matrícula do %do aluno(a): ", i + 1);
        scanf("%s", matriculation);

        form_students(array, name, course, matriculation, i);
        
    }

    register_students(file, array);
    fclose(file);
    free(array->name);
    free(array->course);
    free(array->matriculation);

    return 0;
}