//write a program to check armstrong number//
#include<stdio.h>
int main()
{
    int n,rem,sum=0,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;//Extract last digit
        sum=sum+rem*rem*rem;//Cube of last digit and add to sum
        temp=temp/10;//Remove last digit
    }
    if(sum==n)
        printf("%d is an armstrong number",n);
    
    else
        printf("%d is not an armstrong number",n);
    return 0;
}