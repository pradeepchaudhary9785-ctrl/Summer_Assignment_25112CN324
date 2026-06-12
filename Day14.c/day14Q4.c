//Write a program to find duplicates in array
#include<stdio.h>
int main()
{
    int n, i, j, count;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)//input the elements of the array
    {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in the array are: ");
    for(i = 0; i < n; i++)//algorithm to find duplicates in the array
    {
        count = 1;
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])//if a duplicate element is found
            {
                count++;
                arr[j] = -1;//mark the duplicate element as -1 to avoid counting it again
            }
        }
        if(count > 1 && arr[i] != -1)//if the current element is a duplicate and not marked as -1
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}