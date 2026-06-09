//Write a program to write function to find sum of two numbers//
#include <stdio.h>

int findSum(int a, int b) // Function to find the sum of two numbers
{
    return a + b;// Return the sum of a and b
}

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");// Prompt the user to enter two numbers
    scanf("%d %d", &num1, &num2);// Read the two numbers from user input
    sum = findSum(num1, num2);// Call the findSum function and store the result in sum
    printf("Sum of %d and %d is %d", num1, num2, sum);
    return 0;
}