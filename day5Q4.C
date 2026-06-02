//Write a program to find largest prime factor//
#include <stdio.h>
int main()
 {
    int n, i, maxPrime = -1;
    printf("Enter a number: ");
    scanf("%d", &n);
    // Check for number of 2s that divide n
    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    // n must be odd at this point, so we can skip even numbers
    for (i = 3; i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    if (maxPrime != -1) {
        printf("The largest prime factor is: %d\n", maxPrime);
    } else {
        printf("No prime factors found.\n");
    }
    return 0; 
}
