#ifndef NODE
#define NODE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <struct.h>
#include "node_list.h"

typedef struct {
    Contact contact;
    Node next;
    Node previous;

} Node;


#endif 