#ifndef CONTACT_LIST
#define CONTACT_LIST

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "contact_struct.h"

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

    int i = contact_list->quantity;

    while (strcmp(contact.name, contact_list->array[i].name) > 0 && i > 0) {

        i--;
    }

    return i;
        
}

void add_sort(contactList * contact_list, Contact new_contact) {

    if (!contact_list->array) {

        contact_list->capacity++;

        contact_list->array = (Contact*) malloc(contact_list->capacity * sizeof(Contact));

        contact_list->array[0] = new_contact;
        contact_list->quantity++;

        return;
    }

    

    if (contact_list->capacity == contact_list->quantity) {
        
        contact_list->capacity *= 2;
        realloc(contact_list->array, contact_list->capacity * sizeof(Contact));

    }

    int index = contact_list->quantity;
    printf("\n%d", index);

    while (index > 0 && strcmp(new_contact.name, contact_list->array[index - 1].name) < 0) {
        contact_list->array[index] = contact_list->array[index - 1];
        index--;
    }

    contact_list->array[index] = new_contact;
    contact_list->quantity++;

}
        
void push (contactList * contact_list, Contact contact, int index) {

    if (contact_list->array == NULL) {
        
        contact_list->capacity++;
        contact_list->array = (Contact *) malloc(contact_list->capacity * sizeof(Contact));

        contact_list->array[contact_list->quantity++] = contact;


        return;
    }

    if (contact_list->capacity == contact_list->quantity + 1) {
        
        contact_list->capacity *= 2;
        contact_list->array = (Contact*) realloc(contact_list->array, contact_list->capacity * sizeof(Contact));

    }

    for(int i = contact_list->quantity - 1; i > index + 1; i--){

        contact_list->array[i] = contact_list->array[i - 1];

    };

    contact_list->array[index] = contact;
    contact_list->quantity++;


}

#endif // !CONTACT_LIST