//Write a program to create contact management system//
#include <stdio.h>
int main() {
    char name[50];
    long long mobile;
    // Input contact details
    printf("Enter Contact Name: ");
    scanf("%s", name);
    printf("Enter Mobile Number: ");
    scanf("%lld", &mobile);
    // Display contact details
    printf("\n--- Contact Details ---\n");
    printf("Name : %s\n", name);
    printf("Mobile : %lld\n", mobile);
    return 0;
}
