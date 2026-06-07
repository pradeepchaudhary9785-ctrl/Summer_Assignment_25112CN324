//Write a program to print reverse star pattern//
#include <stdio.h>
int main()
 {
    int i, j, rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = rows; i >= 1; i--) //outer loop for rows
    {
        for (j = 1; j <= i; j++)//inner loop for columns
         {
            printf("* ");
        }
        printf("\n");//new line 
    }

    return 0;
}