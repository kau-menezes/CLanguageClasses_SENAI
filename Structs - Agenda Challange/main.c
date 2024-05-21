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

        printf("\n\n+====================== MENU ======================+");
        printf("\n|                                                  |");
        printf("\n|             Type below the operation             |");
        printf("\n|               you'd like to perform.             |");
        printf("\n|                                                  |");
        printf("\n|               1. Add new contact                 |");
        printf("\n|               2. Delete contact                  |");  
        printf("\n|             3. Search by first name              |");
        printf("\n|           4. Show data from all contacts         |");
        printf("\n|     5. Show name and phone from all contacts     |");
        printf("\n|               6. Exit application                |");
        printf("\n|                                                  |");
        printf("\n+==================================================+");
        printf("\n\nR: ");
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

            printf("\nContact added!");
            
            break;
        
        case 2:

            printf("\n\n============== CONTACT REMOVAL ======================");
            printf("\nType below the corresponding number to the contact you'd like to eliminate.\n\n");

            for (int i = 0; i < contact_list.quantity; i++) {
                printf("\n%d. %s \nPhone: %s", i, contact_list.array[i].name, contact_list.array[i].phone);
                printf("\n------------------------------------------------------");

            }
            printf("\n\nR: ");
            scanf("%d", &choice);

            if (choice>=0 && choice< contact_list.quantity - 1) 
            {

                for (int i = choice; i < contact_list.quantity; i++) {
                    contact_list.array[i] = contact_list.array[i + 1];
                }

                contact_list.quantity--;
                choice = NULL;

                printf("\nContact eliminated. >:)\n");
                break;

            } else {

                printf("\nContact unknown.");
                break;
            }

        case 3:

            printf("\n\n============== CONTACTS SEARCH ======================");
            printf("\nType their first name: ");
            scanf("%s", name);

            int found = 0;

            for (int i = 0; i < contact_list.quantity; i++) 
            {
                if (!strcmp(name, contact_list.array[i].name)) 
                {
                    printf("\nName: %s", contact_list.array[i].name);
                    printf("\nPhone: %s", contact_list.array[i].phone);
                    printf("\n------------------------------------------------------");
                    found++;
                }
            }

            if (found = 0) {
                printf("\nNo contacts found under that name. :(");
            }
                
            break;

        case 4:

        if (contact_list.quantity == 0) 
        {
            printf("\nEmpty contact list, no contact to show.");
            break;
        }

            printf("\n\n====================== CONTACTS ======================");

            for (int i = 0; i < contact_list.quantity; i++) 
            {
                printf("\nName: %s", contact_list.array[i].name);
                printf("\nPhone: %s", contact_list.array[i].phone);
                printf("\nAdress: %s", contact_list.array[i].adress);
                printf("\n------------------------------------------------------");
            }

            break;

        case 5:

            if (contact_list.quantity == 0) 
            {
            printf("\nEmpty contact list, no contact to show.");
            break;
            }

            printf("\n\n====================== CONTACTS ======================\n");

            for (int i = 0; i < contact_list.quantity; i++) {
                printf("\nName: %s", contact_list.array[i].name);
                printf("\nPhone: %s", contact_list.array[i].phone);
                printf("\n------------------------------------------------------");
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