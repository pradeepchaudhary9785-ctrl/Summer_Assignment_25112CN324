//Write a program to write function to find maximum//
#include <stdio.h>

int findMaximum(int a, int b) // Function to find the maximum of two numbers
{
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2, max;
    printf("Enter two numbers: ");// Prompt the user to enter two numbers
    scanf("%d %d", &num1, &num2);// Read the two numbers from user input
    max = findMaximum(num1, num2);// Call the findMaximum function and store the result in max
    printf("Maximum of %d and %d is %d", num1, num2, max);
    return 0;
}