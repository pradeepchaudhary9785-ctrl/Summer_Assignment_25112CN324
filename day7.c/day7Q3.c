//Write a program to recursive sum of digits.//
#include<stdio.h>
int sumOfDigits(int n)//Recursive function to calculate sum of digits//
{
    if(n == 0)
        return 0;//Base case//
    else
        return (n % 10) + sumOfDigits(n / 10); //Recursive call//
}
int main()
{
    int num;
    printf("Enter a number to calculate the sum of its digits: ");
    scanf("%d", &num);
    
    if(num < 0)//Sum of digits is not defined for negative numbers//
        printf("Sum of digits is not defined for negative numbers.\n");
    else
        printf("Sum of digits of %d is %d\n", num, sumOfDigits(num)); //Print the sum of digits result//
    
    return 0;
}