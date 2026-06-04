//Write a program to find x^n without pow()//
#include<stdio.h>
int main()
 {
    int x, n, i;
    long long result = 1;

    printf("Enter the value of x: ");//input base
    scanf("%d", &x);

    printf("Enter the value of n: ");//input exponent
    scanf("%d", &n);

    for (int i = 0; i < n; i++) //Calculate x^n
     {
        result = result * x;
    }

    printf("%d^%d = %lld\n", x, n, result);
    return 0;
}