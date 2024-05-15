#ifndef CONTACT_LIST
#define CONTACT_LIST

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "struct.h"

typedef struct {
    Contact * array;
    int quantity;
    int capacity;
} contactList;


contactList construct_contact_list() {

    contactList new_contactList;

    new_contactList.array = NULL;
    new_contactList.quantity = 0;
    new_contactList.capacity = 0;

    return new_contactList;

}

int get_push_index(contactList * contact_list, Contact contact) {
    
    if (contact_list->capacity == 0) {
        return 0;
    }

    for (int i = 0; i < contact_list->quantity; i++)
    {
        if (tolower(contact.name[0]) >= tolower(contact_list->array[i].name[0])) {
            return i;
        } 

    }
        return contact_list->quantity;
        
}
        
void push (contactList * contact_list, Contact contact, int index) {

    if (contact_list->array == NULL) {
        
        contact_list->capacity++;
        contact_list->array = (Contact *) malloc(contact_list->capacity * sizeof(Contact));

        contact_list->array[contact_list->quantity++] = contact;

        return;
    }

    if (contact_list->capacity == contact_list->quantity) {
        
        contact_list->capacity *= 2;
        contact_list->array = (Contact*) realloc(contact_list->array, contact_list->capacity * sizeof(Contact));

    }

    for(int i = contact_list->capacity; i > index; i--){

        contact_list->array[i] = contact_list->array[i - 1];

    };

    contact_list->array[index] = contact;

}

#endif // !CONTACT_LIST