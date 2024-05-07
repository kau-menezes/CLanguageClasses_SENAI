#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    char name[20];
    char course[20];
    char matriculation[20];
    int grade_1;
    int grade_2;

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

int mean() {}

int main() {
    Student array[10];
    Student student;

    char name[20], course[20], matriculation[20];
    int grade1, grade2;

    for (int i = 0; i < 10; i++) {

        printf("\nDigite o nome do %do aluno(a): ", i +1);
        scanf("%s", name);

        printf("\nDigite o curso do %do aluno(a): ", i + 1);
        scanf("%s", course);

        printf("\nDigite a matrícula do %do aluno(a): ", i + 1);
        scanf("%s", matriculation);

        printf("\nDigite a primeira nota do %do aluno(a): ", i + 1);
        scanf("%d", &grade1);

        printf("\nDigite a segunda nota do %do aluno(a): ", i + 1);
        scanf("%d", &grade2);

        form_students(array, name, course, matriculation, grade1, grade2, i);
    }



}