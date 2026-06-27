//Write a program to create menu-driven array operation system//
#include <stdio.h>
int main() {
    int arr[5], i, sum = 0;
    // Input array
    printf("Enter 5 Elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    // Calculate sum
    for(i = 0; i < 5; i++)
        sum += arr[i];
    // Display array
    printf("\nArray Elements: ");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\nSum = %d", sum);
    return 0;
}