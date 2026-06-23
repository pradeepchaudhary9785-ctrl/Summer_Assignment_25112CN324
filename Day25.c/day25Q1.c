//Write a program to store and display student details using structure//
#include <stdio.h>
// Structure declaration
struct Student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct Student s;

    // Input student details
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    // Display details
    printf("\nStudent Details\n");
    printf("Roll Number = %d\n", s.roll);
    printf("Name = %s\n", s.name);
    printf("Marks = %.2f\n", s.marks);
    return 0;
}