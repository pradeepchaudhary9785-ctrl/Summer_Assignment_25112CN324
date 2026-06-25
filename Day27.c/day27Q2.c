//Write a program to create employee management system//
#include <stdio.h>
int main() {
    // Employee details
    int empId;
    char empName[50];
    float salary;
    // Input employee data
    printf("Enter Employee ID: ");
    scanf("%d", &empId);
    printf("Enter Employee Name: ");
    scanf("%s", empName);
    printf("Enter Salary: ");
    scanf("%f", &salary);
    // Display employee data
    printf("\n--- Employee Details ---\n");
    printf("Employee ID: %d\n", empId);
    printf("Employee Name: %s\n", empName);
    printf("Salary: %.2f\n", salary);
    return 0;
}