//Write a program to rotate array left//
#include <stdio.h>
int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // Number of positions to rotate left

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Rotate the array left by d positions
    for (int i = 0; i < d; i++) {
        int temp = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temp;
    }

    printf("Array after left rotation by %d positions: ", d);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}