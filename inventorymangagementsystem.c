
#include <stdio.h>

struct Item {
    int id, quantity;
    char name[50];
    float price;
};

int main() {
    struct Item item[100];
    int n = 0, choice, i, searchId;

    do {
        printf("\n--- INVENTORY MANAGEMENT SYSTEM ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &item[n].id);

                printf("Enter Item Name: ");
                scanf("%s", item[n].name);

                printf("Enter Price: ");
                scanf("%f", &item[n].price);

                printf("Enter Quantity: ");
                scanf("%d", &item[n].quantity);

                n++;
                printf("Item added successfully.\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No items in inventory.\n");
                } else {
                    printf("\nID\tName\tPrice\tQuantity\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%.2f\t%d\n",
                               item[i].id,
                               item[i].name,
                               item[i].price,
                               item[i].quantity);
                    }
                }
                break;

            case 3:
                printf("Enter Item ID to search: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(item[i].id == searchId) {
                        printf("Item Found:\n");
                        printf("ID: %d\n", item[i].id);
                        printf("Name: %s\n", item[i].name);
                        printf("Price: %.2f\n", item[i].price);
                        printf("Quantity: %d\n", item[i].quantity);
                        break;
                    }
                }

                if(i == n)
                    printf("Item not found.\n");

                break;

            case 4:
                printf("Enter Item ID: ");
                scanf("%d", &searchId);

                for(i = 0; i < n; i++) {
                    if(item[i].id == searchId) {
                        printf("Enter new quantity: ");
                        scanf("%d", &item[i].quantity);

                        printf("Quantity updated.\n");
                        break;
                    }
                }

                if(i == n)
                    printf("Item not found.\n");

                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }

    } while(choice != 5);

    return 0;
}