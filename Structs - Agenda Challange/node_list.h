#ifndef NODE_LIST
#define NODE_LIST

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "struct.h"
#include "node.h"

typedef struct {
    Contact contact;
    int size;
    Node* head;
    Node* tail;

} NodeList;


#endif 