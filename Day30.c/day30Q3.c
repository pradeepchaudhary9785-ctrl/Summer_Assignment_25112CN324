//Write a program to create mini employee management system//
#include <stdio.h>
int main() {
    int empId;
    char empName[30];
    float salary;
    // Input employee details
    printf("Enter Employee ID: ");
    scanf("%d", &empId);
    printf("Enter Employee Name: ");
    scanf("%s", empName);
    printf("Enter Salary: ");
    scanf("%f", &salary);
    // Display employee details
    printf("\n----- Employee Details -----\n");
    printf("Employee ID : %d\n", empId);
    printf("Employee Name : %s\n", empName);
    printf("Salary: %.2f\n", salary);
    return 0;
}