//write a program to find a factorial of a given number//
#include<stdio.h>
int main() {
    int i, n, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++) {
        factorial *= i;
    }
    printf("The factorial of %d is: %d", n, factorial);
    return 0;
}