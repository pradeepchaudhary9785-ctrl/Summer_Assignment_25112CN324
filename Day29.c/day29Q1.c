//Write a program to create menu-driven calculator//
#include <stdio.h>
int main() {
    int choice;
    float a, b;
    // Input numbers
    printf("Enter Two Numbers: ");
    scanf("%f %f", &a, &b);
    // Display menu
    printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);
    // Perform operation
    switch (choice) {
        case 1:
            printf("Result = %.2f", a + b);
            break;
        case 2:
            printf("Result = %.2f", a - b);
            break;
        case 3:
            printf("Result = %.2f", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero is not possible.");
            break;
        default:
            printf("Invalid Choice");
    }
    return 0;
}