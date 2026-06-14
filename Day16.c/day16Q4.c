//Write a program to remove duplicates from an array//
#include <stdio.h>
int main() {
    int n, newSize = 0;
    
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    
    int arr[n], uniqueArr[n]; // Arrays to hold the numbers
    
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) { // Read the numbers into the array
        scanf("%d", &arr[i]);
    }
    
    // Remove duplicates
    for(int i = 0; i < n; i++) {// Iterate through the original array
        int isDuplicate = 0;
        for(int j = 0; j < newSize; j++) { // Check if the current element is already in the unique array
            if(arr[i] == uniqueArr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            uniqueArr[newSize] = arr[i];// Add the unique element to the unique array
            newSize++;
        }
    }
    
    // Print the array without duplicates
    printf("Array after removing duplicates:\n");
    for(int i = 0; i < newSize; i++) {
        printf("%d ", uniqueArr[i]);
    }
    printf("\n");
    
    return 0;
}