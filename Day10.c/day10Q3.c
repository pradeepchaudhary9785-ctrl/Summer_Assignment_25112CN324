//Write a program to print number pyramid//
#include<stdio.h>
int main()
{
    int i,j,n ,k;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)//for row
    {
        for(j=1;j<=i;j++)//for space
        {
            printf("%d",j);
        }
        for(k=i-1;k>=1;k--)//for number
        {
            printf("%d",k);
        }
        printf("\n");//for new line
    }
    return 0;
}