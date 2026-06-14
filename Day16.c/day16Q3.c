//Write a program to find with pair with  given sum//
#include <stdio.h>
int main() {
    int n, sum;
    
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    
    int arr[n]; // Array to hold the numbers
    
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the target sum: ");
    scanf("%d", &sum);
    
    // Find the pair with the given sum
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("The pair with sum %d is: (%d, %d)\n", sum, arr[i], arr[j]);
                return 0;
            }
        }
    }
    
    printf("No pair found with the given sum.\n");
    
    return 0;
}