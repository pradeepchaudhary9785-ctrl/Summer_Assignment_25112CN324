//Write a program to add matrices//
#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], sum[3][3];
    int i, j;

    // Input first matrix
    printf("Enter elements of first matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of second matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    // Add matrices
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    printf("Sum Matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}