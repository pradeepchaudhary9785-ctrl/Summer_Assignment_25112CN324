//Write a program to rotate array right//
#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);// Calculate the size of the array
    int d = 2; // Number of positions to rotate right

    printf("Original array: ");
    for (int i = 0; i < size; i++)// Loop to print the original array
     {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Rotate the array right by d positions
    for (int i = 0; i < d; i++) {
        int temp = arr[size - 1];
        for (int j = size - 1; j > 0; j--)// Loop to shift elements to the right
         {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }

    printf("Array after right rotation by %d positions: ", d);
    for (int i = 0; i < size; i++)// Loop to print the rotated array
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}