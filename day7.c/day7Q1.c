//Write a program to recursive factorial.//
#include<stdio.h>
int factorial(int n)//Recursive function to calculate factorial//
{
    if(n==0 || n==1)
        return 1;//Base case//
    else
        return n*factorial(n-1);//Recursive call//
}
int main()
{
    int num;
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);
    
    if(num < 0)//Factorial is not defined for negative numbers//
        printf("Factorial is not defined for negative numbers.\n");
    else
        printf("Factorial of %d is %d\n", num, factorial(num)); //Print the factorial result//
    
    return 0;
}