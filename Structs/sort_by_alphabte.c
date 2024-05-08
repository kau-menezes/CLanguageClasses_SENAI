#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    char adress[20];
    char phone[10];
} Person;

int form_people(Person* array, char* name, char* adress, char* phone, int i) {

    strcpy(array[i].name, name);

    strcpy(array[i].adress, adress);

    strcpy(array[i].phone, phone);

    return 0;

}

int main()
{

    char name[20];
    char adress[20];
    char phone[10];
    Person array[5];

    for (int i = 0; i < 5; i++) 
    {
        printf("=== PESSOA %d ===\n", i + 1);
        printf("\nDigite o nome da %da pessoa: ", i + 1);
        scanf("%s", name);

        printf("\nDigite o endereço da %da pessoa: ", i + 1);
        scanf("%s", adress);

        printf("\nDigite o telefone da %da pessoa: ", i + 1);
        scanf("%s", phone);
    }

    // sort

}