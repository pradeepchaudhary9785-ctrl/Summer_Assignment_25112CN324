//Write a program to find product of digits//
#include <stdio.h>

int main() {
    int num, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10; // Get the last digit
        product = product * digit; // Multiply it with the product
        num = num / 10; // Remove the last digit
    }

    printf("Product of digits: %d\n", product);

    return 0;
}