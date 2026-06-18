//Write a program to find column-wise sum//
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
    // Find column-wise sum
    for(j=0; j<3; j++)
    {
        sum = 0;
        for(i=0; i<3; i++)
        {
            sum += a[i][j];
        }
        printf("Sum of Column %d = %d\n", j+1, sum);
    }
    return 0;
}