//Write a program to print character pyramid//
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
            printf("%c",j+64);
        }
        for(k=i-1;k>=1;k--)//for number
        {
            printf("%c",k+64);
        }
        printf("\n");//for new line
    }
    return 0;
}