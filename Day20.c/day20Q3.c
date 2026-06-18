//Write a program to find row wise sum//
#include <stdio.h>
int main()
{
    int a[3][3];
    int i, j, sum;
    // Input matrix
    printf("Enter matrix elements:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // Find row-wise sum
    for(i=0; i<3; i++)
    {
        sum = 0;
        for(j=0; j<3; j++)
        {
            sum += a[i][j];
        }
        printf("Sum of Row %d = %d\n", i+1, sum);
    }
    return 0;
}