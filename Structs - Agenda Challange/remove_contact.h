#ifndef REMOVE_CONTACT
#define REMOVE_CONTACT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "struct.h"

int get_pop_index(Contact* contact_list, char* phone, int size) {

    for (int i = 0; i < size; i++) {
        if (strcmp(phone, contact_list[0].phone)) {
            return i;
        } else {
            return -1;
        }

    }
}

void pop(Contact* contact_list, char* phone, int* size, int index) {

    contact_list[index] = {};
    
}

#endif // !REMOVE_CONTACT