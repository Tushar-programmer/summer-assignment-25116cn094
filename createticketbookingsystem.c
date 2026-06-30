#include <stdio.h>

int seats[10] = {0};   // 0 = Available, 1 = Booked

void displaySeats() {
    printf("\nSeat Status:\n");

    for(int i = 0; i < 10; i++) {
        if(seats[i] == 0)
            printf("Seat %d : Available\n", i + 1);
        else
            printf("Seat %d : Booked\n", i + 1);
    }
}

void bookTicket() {
    int seatNo;

    printf("Enter seat number (1-10): ");
    scanf("%d", &seatNo);

    if(seatNo < 1 || seatNo > 10) {
        printf("Invalid seat number!\n");
    }
    else if(seats[seatNo - 1] == 1) {
        printf("Seat already booked!\n");
    }
    else {
        seats[seatNo - 1] = 1;
        printf("Ticket booked successfully!\n");
    }
}

void cancelTicket() {
    int seatNo;

    printf("Enter seat number to cancel: ");
    scanf("%d", &seatNo);

    if(seatNo < 1 || seatNo > 10) {
        printf("Invalid seat number!\n");
    }
    else if(seats[seatNo - 1] == 0) {
        printf("Seat is not booked!\n");
    }
    else {
        seats[seatNo - 1] = 0;
        printf("Ticket cancelled successfully!\n");
    }
}

int main() {
    int choice;

    do {
        printf("\n--- Ticket Booking System ---");
        printf("\n1. Display Seats");
        printf("\n2. Book Ticket");
        printf("\n3. Cancel Ticket");
        printf("\n4. Exit");

        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                displaySeats();
                break;

            case 2:
                bookTicket();
                break;

            case 3:
                cancelTicket();
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