//Write a program to create bank account system//
#include <stdio.h>
int main() {
    int accNo;
    char name[50];
    float balance;
    // Input account details
    printf("Enter Account Number: ");
    scanf("%d", &accNo);
    printf("Enter Account Holder Name: ");
    scanf("%s", name);
    printf("Enter Balance: ");
    scanf("%f", &balance);
    // Display account details
    printf("\n--- Bank Account ---\n");
    printf("Account Number : %d\n", accNo);
    printf("Account Holder : %s\n", name);
    printf("Balance : %.2f\n", balance);
    return 0;
}