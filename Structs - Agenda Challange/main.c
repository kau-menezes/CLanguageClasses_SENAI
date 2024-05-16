#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "contact_struct.h"
#include "contact_list.h"

int main() {

    contactList contact_list = construct_contact_list();

    printf("=== WELCOME TO YOUR CONTACT LIST ===\n");
    char name[15], phone[10], adress[20];
    
    int choice = 0;

    while (1) 
    {

        printf("\nType below the operation you'd like to perform.\n1. Add new contact\n2. Delete contact\n3. Search by first name\n4. Show data from all contacts\n5. Show name and phone from all contacts\n6. Exit application\n\nR: ");
        scanf(" %d", &choice);

        switch (choice)
        {
        
        case 1:
        
            printf("\nType your contact name: ");
            scanf("%s", name);

            printf("\nType their phone: ");
            scanf("%s", phone);

            printf("\nType their adress: ");
            scanf("%s", adress);

            Contact contact = construct_contact(name, phone, adress);

            add_sort(&contact_list, contact);

            printf("\nContact added.");
            
            break;
        
        case 2:

            printf("\nWorking on that.");

        case 3:

            printf("\nWorking on that.");

        case 4:

            printf("\n=== CONTACTS ===");

            for (int i = 0; i < contact_list.quantity; i++) {
                printf("\nName: %s", contact_list.array[i].name);
                printf("\nPhone: %s", contact_list.array[i].phone);
                printf("\nAdress: %s", contact_list.array[i].adress);

                printf("\n----------------");
            }

            break;

        case 5:

            printf("\n=== CONTACTS ===");

            for (int i = 0; i < contact_list.quantity; i++) {
                printf("\nName: %s", contact_list.array[i].name);
                printf("\nPhone: %s", contact_list.array[i].phone);

                printf("\n----------------");
            }

            break;
        
        case 6:

            printf("\nApplication stopped.");
            break;

        default:

            printf("\nOperation unkown.");
            break;
        }

    if (choice == 6) 
    {
        break;
    }

    }

    return 0;
}