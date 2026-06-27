//Write a program to create inventory managementsystem//
#include <stdio.h>
int main() {
    int itemId, quantity;
    char itemName[50];
    // Input item details
    printf("Enter Item ID: ");
    scanf("%d", &itemId);
    printf("Enter Item Name: ");
    scanf("%s", itemName);
    printf("Enter Quantity: ");
    scanf("%d", &quantity);
    // Display inventory
    printf("\n--- Inventory Details ---\n");
    printf("Item ID : %d\n", itemId);
    printf("Item Name : %s\n", itemName);
    printf("Quantity : %d\n", quantity);
    return 0;
}