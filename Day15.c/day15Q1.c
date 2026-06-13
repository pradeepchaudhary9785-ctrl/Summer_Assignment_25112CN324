//Write a program to reverse array//
#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);// Calculate the size of the array

    printf("Original array: ");
    for (int i = 0; i < size; i++) // Loop to print the original array
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reverse the array
    for (int i = 0; i < size / 2; i++)
     {
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];// Swap the elements
        arr[size - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < size; i++)// Loop to print the reversed array
     {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}