//Write a program to recursive Fibonacci.//
#include<stdio.h>

int fibonacci(int n)//Recursive function to calculate Fibonacci//
 {
    if (n == 0)//Base case//
        return 0;
    else if (n == 1)//Base case//
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2); //Recursive call//
}

int main() {
    int num;
    printf("Enter the number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci sequence: ");
    for (int i = 0; i < num; i++) //Loop to print Fibonacci sequence//
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}