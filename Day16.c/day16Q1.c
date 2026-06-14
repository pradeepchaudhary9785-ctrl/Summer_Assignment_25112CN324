//Write a program to find missing number in array//
#include <stdio.h>
int main() {
    int n, sum = 0, totalSum, missingNumber;
    
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    
    int arr[n-1]; // Array of size n-1 to hold the numbers
    
    printf("Enter %d numbers (from 1 to %d) with one number missing:\n", n-1, n);
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate the sum of the entered numbers
    }
    
    totalSum = n * (n + 1) / 2; // Calculate the expected sum of numbers from 1 to n
    missingNumber = totalSum - sum; // Find the missing number
    
    printf("The missing number is: %d\n", missingNumber);
    
    return 0;
}