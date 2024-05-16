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

// Contact construct_contact(char* name, char* email, char* adress, char* phone, char* birthdate) {
//     Contact new_contact;

//     strcpy(new_contact.name, name);
//     // strcpy(new_contact.email, email);
//     // strcpy(new_contact.adress, adress);
//     // strcpy(new_contact.phone, phone);
//     // strcpy(new_contact.birth_date, birthdate);

//     return new_contact;
// }

Contact construct_contact(char name[]) {
    Contact new_contact;

    strcpy(new_contact.name, name);
    // strcpy(new_contact.email, email);
    // strcpy(new_contact.adress, adress);
    // strcpy(new_contact.phone, phone);
    // strcpy(new_contact.birth_date, birthdate);

    return new_contact;
}

#endif