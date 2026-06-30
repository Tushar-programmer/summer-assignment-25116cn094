#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[15];
};

struct Contact contacts[100];
int count = 0;

void addContact() {
    printf("Enter Name: ");
    scanf(" %[^\n]", contacts[count].name);

    printf("Enter Phone Number: ");
    scanf("%s", contacts[count].phone);

    count++;
    printf("Contact added successfully!\n");
}

void displayContacts() {
    if(count == 0) {
        printf("No contacts available!\n");
        return;
    }

    printf("\n--- Contact List ---\n");

    for(int i = 0; i < count; i++) {
        printf("\nName: %s", contacts[i].name);
        printf("\nPhone: %s\n", contacts[i].phone);
    }
}

void searchContact() {
    char searchName[50];
    int found = 0;

    printf("Enter name to search: ");
    scanf(" %[^\n]", searchName);

    for(int i = 0; i < count; i++) {
        if(strcmp(contacts[i].name, searchName) == 0) {
            printf("\nContact Found:");
            printf("\nName: %s", contacts[i].name);
            printf("\nPhone: %s\n", contacts[i].phone);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Contact not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Contact Management System ---");
        printf("\n1. Add Contact");
        printf("\n2. Display Contacts");
        printf("\n3. Search Contact");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                addContact();
                break;

            case 2:
                displayContacts();
                break;

            case 3:
                searchContact();
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}