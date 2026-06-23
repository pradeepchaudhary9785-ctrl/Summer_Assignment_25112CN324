//Write a program to find student with highest marks//
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
    int i, maxIndex = 0;
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
    // Find highest marks
    for(i=1; i<5; i++)
    {
        if(s[i].marks > s[maxIndex].marks)
        {
            maxIndex = i;
        }
    }
    // Display topper
    printf("\nStudent with Highest Marks\n");
    printf("Roll = %d\n", s[maxIndex].roll);
    printf("Name = %s\n", s[maxIndex].name);
    printf("Marks = %.2f\n", s[maxIndex].marks);
    return 0;
}