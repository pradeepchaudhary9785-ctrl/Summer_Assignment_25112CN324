//Write a program to printrepeated-number pattern//
#include<stdio.h>
int main()
{
    int i,j,row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)//for printing the rows
    {
         for(j=1;j<=i;j++)//for printing the numbers
        {
            printf("%d ",i);//for printing the numbers
        }
        printf("\n");
    }
    return 0;
}