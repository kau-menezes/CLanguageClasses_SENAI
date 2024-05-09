#ifndef ADD_CONTACT.h
#define ADD_CONTACT.h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "struct.h"

Contact form_contact(char name[20], char email[20], char adress[20], char phone[10], char birth_date[11]) {
    Contact contact;
    strcpy(contact.name, name);
    strcpy(contact.email, email);
    strcpy(contact.adress, adress);    
    strcpy(contact.phone, phone);
    strcpy(contact.birth_date, birth_date);

    return contact;

}


int add_contact (Contact contact, Contact array[], int size) {

    array = (Contact*) realloc(array, (sizeof(Contact))*(size + 1));

    array[size - 1] = contact;

    return 0;
}
#endif 