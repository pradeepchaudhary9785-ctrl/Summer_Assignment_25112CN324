//write a program to find nth fibonacci term //
#include<stdio.h>
int main() 
{
    int n,a =0,b=1,c,i;
    printf("Enter n:"); 
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        c=a+b;//Next term
        a=b;
        b=c;
    }
    printf("Nth fibonacci term =%d",a);
    return 0;
    }