//Write a program to sort array in descending order//
#include <stdio.h>

int main()
{
    int arr[100], n, i, j, temp;

    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Descending Sort
    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                // Swap
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print sorted array
    printf("Array in Descending Order:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}