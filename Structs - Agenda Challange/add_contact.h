#ifndef ADD_CONTACT
#define ADD_CONTACT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "struct.h"

// cria um contato à prtir das infomrações passadas pelo usuário
Contact form_contact(char name[20], char email[20], char adress[20], char phone[10], char birth_date[11]) {

    Contact contact;

    strcpy(contact.name, name);
    strcpy(contact.email, email);
    strcpy(contact.adress, adress);    
    strcpy(contact.phone, phone);
    strcpy(contact.birth_date, birth_date);

    return contact;

}

int get_push_index(Contact *array, Contact contact, int *size) {
    
    printf("\n tamanho %d", *size);
    if (*size == 0) {
        return 0;
    }

    for (int i = 0; i < size; i++)
    {

        if (tolower(contact.name[0]) >= tolower(array[i].name[0])) {
            return i;
        } 

    }
        return size;
        
}

void push (Contact contact, Contact *array, int* size, int index) {

    Contact * aux;
    printf("\n antes do realloc");
    printf("\nsizeof array %d", sizeof(array));

    printf("\n%d %d %d", sizeof(Contact), *size + 1, (sizeof(Contact))*(*size + 1));

    aux = (Contact*) realloc(array, sizeof(Contact)*(*size + 1));

    printf("\nrealloc");
    printf("\nsizeof array %d", sizeof(array));

    for (int i = *size; i > index; i--)
    {
        array[i] = array[i - 1]; 
        printf("\ndeu boa no loop");

    }
    printf("\ndeu boa 3");
    
    array[index] = contact;
    printf("\ndeu boa 4");

    *size++;
}

#endif 