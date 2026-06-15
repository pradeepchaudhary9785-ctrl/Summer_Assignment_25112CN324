//Write a program to union of arrays
#include <stdio.h>
int main() {
    int a[100], b[100], c[200];
    int n, m, i, j, k = 0;
    
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of first array: ");
    for(i = 0; i < n; i++) {// Note: using 'i' here is fine since we haven't used it yet
        scanf("%d", &a[i]);
    }
    
    printf("Enter the number of elements in second array: ");
    scanf("%d", &m);
    
    printf("Enter the elements of second array: ");
    for(i = 0; i < m; i++) {// Note: using 'i' here is fine since the previous loop has completed
        scanf("%d", &b[i]);
    }
    
    // Finding union of the two arrays
    for(i = 0; i < n; i++) {// Copy elements of first array to union array
        c[k] = a[i];
        k++;
    }
    
    for(j = 0; j < m; j++) {// Check if element of second array is already in union array
        int found = 0;
        for(i = 0; i < k; i++) {// Check if b[j] is already in c
            if(b[j] == c[i]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            c[k] = b[j];
            k++;
        }
    }
    
    // Printing the union array
    printf("Union array: ");
    for(i = 0; i < k; i++) {// Print elements of union array
        printf("%d ", c[i]);
    }
    
    return 0;
}
