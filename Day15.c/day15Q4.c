//Write a program to move zeros to end //
#include <stdio.h>
int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0; // Count of non-zero elements

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Move non-zero elements to the front
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }

    // Fill the remaining positions with zeros
    while (count < size) {
        arr[count++] = 0;
    }

    printf("Array after moving zeros to the end: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}