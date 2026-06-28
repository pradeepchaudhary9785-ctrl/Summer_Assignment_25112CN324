//Write a program to develop complete mini project using arrays,strings and functions//
#include <stdio.h>
// Function to display student record
void display(int roll, char name[], float marks) {
    // Display details
    printf("\n----- Student Record -----\n");
    printf("Roll No : %d\n", roll);
    printf("Name    : %s\n", name);
    printf("Marks   : %.2f\n", marks);
}
int main() {
    // Variables
    int roll;
    char name[30];
    float marks;
    // Input details
    printf("Enter Roll Number: ");
    scanf("%d", &roll);
    printf("Enter Name: ");
    scanf("%s", name);

    printf("Enter Marks: ");
    scanf("%f", &marks);
    // Call function
    display(roll, name, marks);
    return 0;
}