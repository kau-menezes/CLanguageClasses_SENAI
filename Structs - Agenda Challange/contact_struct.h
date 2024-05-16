#ifndef CONTACT_STRUCT
#define CONTACT_STRUCT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[15];
    char phone[10];
    char adress[20];
    
} Contact;


Contact construct_contact(char name[], char phone[], char adress[]) {

    Contact new_contact;

    strcpy(new_contact.name, name);
    strcpy(new_contact.phone, phone);
    strcpy(new_contact.adress, adress);

    return new_contact;
}

#endif