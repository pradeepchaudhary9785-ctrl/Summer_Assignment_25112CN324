//Write a program to create student record management system//
#include <stdio.h>
int main() {
    // Student details
    int roll;
    char name[50];
    float marks;
    // Input student data
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Marks: ");
    scanf("%f", &marks);
    // Display student data
    printf("\n--- Student Record ---\n");
    printf("Roll Number: %d\n", roll);
    printf("Name: %s\n", name);
    printf("Marks: %.2f\n", marks);
    return 0;
}