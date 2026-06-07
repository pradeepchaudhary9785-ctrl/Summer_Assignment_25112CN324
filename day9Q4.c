//Write a program to print hollow square pattern//
#include <stdio.h>
int main()
 {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) //outer loop for rows
    {
        for (j = 1; j <= rows; j++) //inner loop for columns
         {
            if (i == 1 || i == rows || j == 1 || j == rows) //condition for hollow square
             {
                printf("* ");
            } else {
                printf("  ");//space for hollow part
            }
        }
        printf("\n");//new line 
    }

    return 0;
}