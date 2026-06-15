//Write a program to merge array//
#include <stdio.h>
int main() {
    int a[100], b[100], c[200];
    int n, m, i, j;
    
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of first array: ");
    for(i = 0; i < n; i++) {// Note: using 'i' here is fine since we haven't used it yet
        scanf("%d", &a[i]);
    }
    
    printf("Enter the number of elements in second array: ");
    scanf("%d", &m);
    
    printf("Enter the elements of second array: ");
    for(i = 0; i < m; i++) { // Note: using 'i' here is fine since the previous loop has completed
        scanf("%d", &b[i]);
    }
    
    // Merging the two arrays
    for(i = 0; i < n; i++) {  // Copy elements of first array to merged array
        c[i] = a[i];
    }
    
    for(j = 0; j < m; j++) { // Copy elements of second array to merged array
        c[i + j] = b[j];
    }
    
    // Printing the merged array
    printf("Merged array: ");
    for(i = 0; i < n + m; i++) {
        printf("%d ", c[i]);
    }
    
    return 0;
}