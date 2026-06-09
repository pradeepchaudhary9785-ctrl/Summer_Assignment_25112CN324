//Write a program to write function to check prime //
#include <stdio.h>

int isPrime(int n) // Function to check if a number is prime
{
    if (n <= 1)
        return 0;
    if (n <= 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int num;
    printf("Enter a number: ");// Prompt the user to enter a number
    scanf("%d", &num);// Read the number from user input
    if (isPrime(num))// Call the isPrime function and check the result
        printf("%d is a prime number.", num);
    else
        printf("%d is not a prime number.", num);
    return 0;
}
