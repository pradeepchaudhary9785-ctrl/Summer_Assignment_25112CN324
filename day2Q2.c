//Write a program to reverse a number//
#include <stdio.h>

int main() {
    int num, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10; // Get the last digit
        rev = rev * 10 + digit; // Append it to the reversed number
        num = num / 10; // Remove the last digit
    }

    printf("Reversed number: %d\n", rev);

    return 0;
}