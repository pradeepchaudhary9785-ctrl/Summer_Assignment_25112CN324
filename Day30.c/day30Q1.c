//Write a program to create student record system using arrays strings//
#include <stdio.h>
int main() {
    int roll[3], i;
    char name[3][30];
    float marks[3];
    // Input student records
    for(i = 0; i < 3; i++) {
        printf("\nEnter Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Enter Name: ");
        scanf("%s", name[i]);
        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
    // Display student records
    printf("\n----- Student Records -----\n");
    for(i = 0; i < 3; i++) {
        printf("\nRoll No : %d", roll[i]);
        printf("\nName    : %s", name[i]);
        printf("\nMarks   : %.2f\n", marks[i]);
    }
    return 0;
}