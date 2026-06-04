//Write a program to print factor of a number //
#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors of %d are: ", n);
    for (i = 1; i <= n; i++) //find factor number
    {
        if (n % i == 0) //check factor
         {
            printf("%d ", i); //print factors
        }
    }
    printf("\n");
    return 0;
}