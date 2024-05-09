#ifndef STRUCT_CONTACT
#define STRUCT_CONTACT

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    char email[20];
    char adress[20];
    char phone[10];
    char birth_date[11];
} Contact;

#endif