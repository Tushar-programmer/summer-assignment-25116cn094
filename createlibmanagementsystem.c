#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;
};

struct Book books[100];
int count = 0;

void addBook() {
    printf("Enter Book ID: ");
    scanf("%d", &books[count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", books[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", books[count].author);

    books[count].issued = 0;
    count++;

    printf("Book added successfully!\n");
}

void displayBooks() {
    if(count == 0) {
        printf("No books available.\n");
        return;
    }

    printf("\nLibrary Books:\n");
    for(int i = 0; i < count; i++) {
        printf("\nID: %d", books[i].id);
        printf("\nTitle: %s", books[i].title);
        printf("\nAuthor: %s", books[i].author);

        if(books[i].issued)
            printf("\nStatus: Issued\n");
        else
            printf("\nStatus: Available\n");
    }
}

void searchBook() {
    int id, found = 0;

    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(books[i].id == id) {
            printf("\nBook Found:");
            printf("\nTitle: %s", books[i].title);
            printf("\nAuthor: %s", books[i].author);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("Book not found!\n");
}

void issueBook() {
    int id;

    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++) {
        if(books[i].id == id) {
            if(books[i].issued)
                printf("Book already issued!\n");
            else {
                books[i].issued = 1;
                printf("Book issued successfully!\n");
            }
            return;
        }
    }

    printf("Book not found!\n");
}

int main() {
    int choice;

    do {
        printf("\n--- Library Management System ---");
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Search Book");
        printf("\n4. Issue Book");
        printf("\n5. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: printf("Exiting..."); break;
            default: printf("Invalid choice!");
        }

    } while(choice != 5);

    return 0;
}