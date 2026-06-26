//Write a program to create ticket booking system//
#include <stdio.h>
int main() {
    char name[50];
    int seats;
    // Input booking details
    printf("Enter Passenger Name: ");
    scanf("%s", name);
    printf("Enter Number of Seats: ");
    scanf("%d", &seats);
    // Display booking details
    printf("\n--- Ticket Booking ---\n");
    printf("Passenger Name : %s\n", name);
    printf("Seats Booked : %d\n", seats);
    return 0;
}