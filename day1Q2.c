//write a program to print multiplication table of a given number//
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Multiplication table of %d:\n", n);
    for(i=1; i<=n; i++)
    {
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}