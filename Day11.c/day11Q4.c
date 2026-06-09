//Write a program to write function to find factorial//
#include <stdio.h>

int findFactorial(int n) // Function to find the factorial of a number
{
    if (n == 0)
        return 1;
    else
        return n * findFactorial(n - 1);
}

int main()
{
    int num;
    printf("Enter a number: ");// Prompt the user to enter a number
    scanf("%d", &num);// Read the number from user input
    printf("Factorial of %d is %d", num, findFactorial(num));
    return 0;
}