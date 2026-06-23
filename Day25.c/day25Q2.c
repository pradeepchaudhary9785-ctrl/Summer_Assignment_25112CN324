//Write a program to store details of 5 students//
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
    struct Student s[5];
    int i;
    // Input details
    for(i=0; i<5; i++)
    {
        printf("\nEnter details of Student %d\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    // Display details
    printf("\nStudent Details\n");
    for(i=0; i<5; i++)
    {
        printf("\nStudent %d\n", i+1);

        printf("Roll = %d\n", s[i].roll);
        printf("Name = %s\n", s[i].name);
        printf("Marks = %.2f\n", s[i].marks);
    }
    return 0;
}