//Write a program to create quiz application//
#include <stdio.h>
int main()
{
    int answer, score = 0;
    // Question 1
    printf("Q1. What is the capital of India?\n");
    printf("1. Delhi\n2. Mumbai\n3. Kolkata\n");
    printf("Enter answer: ");
    scanf("%d", &answer);
    if(answer == 1)
        score++;
    // Question 2
    printf("\nQ2. How many days are there in a week?\n");
    printf("1. 5\n2. 7\n3. 10\n");
    printf("Enter answer: ");
    scanf("%d", &answer);
    if(answer == 2)
        score++;
    // Result
    printf("\nYour Score = %d/2\n", score);
    return 0;
}