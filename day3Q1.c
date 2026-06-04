//write a program to check whether a number is prime//
#include <stdio.h>
int main() {
    int num, i, prime = 0;
printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
        return 0;
    }
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) //check divisibility//
        {
            prime = 1; //number is not prime//
            break; //exist loop//
        }
    }
    if (prime == 0) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}