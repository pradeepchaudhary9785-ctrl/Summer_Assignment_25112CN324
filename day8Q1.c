//Write a program to print half pyramid pattern//
#include<stdio.h>
int main()
{
    int i,j,rows,space;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)//for printing the rows
    {
        for(space=1;space<=rows-i;space++)//for printing the spaces
        {
            printf(" ");
        }
        for(j=1;j<=(2*i-1);j++)//for printing the stars
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}