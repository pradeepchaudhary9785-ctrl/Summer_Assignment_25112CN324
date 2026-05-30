//Write a program to print prime number in a range//
#include <stdio.h>
int main() {
    int lower, upper, i, prime;
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    printf("Prime numbers between %d and %d are: ", lower, upper);
    for (i = lower; i <= upper; i++) {
        if (i <= 1) {
            continue; // Skip numbers less than or equal to 1
        }
        prime = 1; // Assume number is prime
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0; // Number is not prime
                break; // Exit loop
            }
        }
        if (prime == 1) {
            printf("%d ", i); // Print prime number
        }
    }
    printf("\n");
    return 0;
}