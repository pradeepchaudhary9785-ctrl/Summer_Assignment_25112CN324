//Write a program to check strong number//
#include <stdio.h>
int main() {
    int n, temp, sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        int digit = temp % 10; // Get the last digit
        fact = 1;
        for (int i = 1; i <= digit; i++) { // Calculate factorial of the digit
            fact *= i;
        }
        sum += fact; // Add factorial to sum
        temp /= 10; // Remove the last digit
    }
    if (sum == n) {
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }
    return 0;
}