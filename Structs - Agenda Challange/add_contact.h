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

int alphaSort(Contact *array, Contact contact, int size) {
    
    if (array == NULL) {
        return 0;
    }

    for (int i = 0; i < size; i++)
    {

        if (contact.name[0] > array[i].name[0]) {
            return i;
        } 

        return size;
    }

}

void add_contact (Contact contact, Contact *array, int* size, int index) {

    array = (Contact*) realloc(array, (sizeof(Contact))*(*size + 1));

    for (int i = *size; i > index; i--)
    {
        array[i] = array[i - 1]; 
    }
    
    array[index] = contact;

    *size++;
}
#endif 