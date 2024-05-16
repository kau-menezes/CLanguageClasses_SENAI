#ifndef CONTACT_STRUCT
#define CONTACT_STRUCT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    // char email[20];
    // char adress[20];
    // char phone[10];
    // char birth_date[20];
    
} Contact;

Contact construct_contact() {
    Contact new_contact;

    new_contact.name;
    // new_contact.email;
    // new_contact.adress;
    // new_contact.phone;
    // new_contact.birth_date;

    return new_contact;
}

#endif