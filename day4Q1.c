//Write a program to generate fibonacci series.// 
#include <stdio.h>
int main()
{
    int n,a =0,b=1,c,i ;
    printf("Enter number of term: ");
    scanf("%d",&n); 

    printf("fibonacci series :");
    for(i=1;i<=n;i++)
    {
        printf("%d",a);
         c = a + b;//Next term
         a = b;
         b = c;
    }
    return 0;
}