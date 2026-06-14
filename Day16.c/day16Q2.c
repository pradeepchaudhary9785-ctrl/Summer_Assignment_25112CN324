//Write a program to find maximum frequency element//
#include <stdio.h>
int main() {
    int n, maxFreq = 0, maxFreqElement;
    
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    
    int arr[n]; // Array to hold the numbers
    
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Find the maximum frequency element
    for(int i = 0; i < n; i++) {
        int freq = 1; // Frequency of the current element
        
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq++; // Increment frequency if a match is found
            }
        }
        
        // Update max frequency and element if current frequency is greater
        if(freq > maxFreq) {
            maxFreq = freq;
            maxFreqElement = arr[i];
        }
    }
    
    printf("The maximum frequency element is: %d with a frequency of %d\n", maxFreqElement, maxFreq);
    
    return 0;
}