//Write a program to binary search//
#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int low, high, mid, key;
    int found = 0;

    // Input size
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Input sorted array
    printf("Enter sorted array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    // Binary Search
    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Output
    if(found)
    {
        printf("Element found at index %d", mid);
    }
    else
    {
        printf("Element not found");
    }

    return 0;
}