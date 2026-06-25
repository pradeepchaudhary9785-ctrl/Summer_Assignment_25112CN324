//Write a program to create marksheet generation system//
#include <stdio.h>
int main() {
    // Variables for marks and calculations
    int rollNo;
    char name[50];
    float sub1, sub2, sub3, sub4, sub5;
    float total, percentage;
    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);
    printf("Enter Student Name: ");
    scanf("%s", name);
    // Input marks of 5 subjects
    printf("Enter Marks of Subject 1: ");
    scanf("%f", &sub1);
    printf("Enter Marks of Subject 2: ");
    scanf("%f", &sub2);
    printf("Enter Marks of Subject 3: ");
    scanf("%f", &sub3);
    printf("Enter Marks of Subject 4: ");
    scanf("%f", &sub4);
    printf("Enter Marks of Subject 5: ");
    scanf("%f", &sub5);
    // Calculate total and percentage
    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;
    // Display marksheet
    printf("\n----- MARKSHEET -----\n");
    printf("Roll Number : %d\n", rollNo);
    printf("Name        : %s\n", name);
    printf("Total Marks : %.2f\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    // Display grade
    if (percentage >= 90)
        printf("Grade       : A+\n");
    else if (percentage >= 80)
        printf("Grade       : A\n");
    else if (percentage >= 70)
        printf("Grade       : B\n");
    else if (percentage >= 60)
        printf("Grade       : C\n");
    else if (percentage >= 40)
        printf("Grade       : D\n");
    else
        printf("Grade       : F\n");
    return 0;
}