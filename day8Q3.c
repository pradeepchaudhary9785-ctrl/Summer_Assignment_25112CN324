//Write a program to print character triangle//
#include<stdio.h>
int main () 
{
    int i,j,row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)//for printing the rows
    {
         for(j=1;j<=i;j++)//for printing the characters
        {
            printf("%c ",j+64);//for printing the characters
        }
        printf("\n");
    }
    return 0;
}