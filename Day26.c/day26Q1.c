//Write a program to create number guessing game//
#include <stdio.h>
int main()
{
    int secretNumber = 7;   // Fixed secret number
    int guess;
    // Taking input from user
    printf("Enter your guess (1-10): ");
    scanf("%d", &guess);
    // Checking the guess
    if (guess == secretNumber)
    {
        printf("Congratulations! You guessed the correct number.\n");
    }
    else if (guess < secretNumber)
    {
        printf("Too Low! Try again.\n");
    }
    else
    {
        printf("Too High! Try again.\n");
    }
    return 0;
}