//Write a program to write function fibbonacci//
#include <stdio.h>

int fibonacci(int num) {
    if (num == 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);// Recursive call to calculate the Fibonacci number at position num
    }
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);
    printf("Fibonacci sequence: ");
    for (int i = 0; i < num; i++) // Loop to print the Fibonacci sequence up to num terms
    {
        printf("%d ", fibonacci(i));// Call the fibonacci function 
    }
    return 0;
}