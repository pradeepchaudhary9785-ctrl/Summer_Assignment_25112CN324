//Write a program to frequency of an element//
#include<stdio.h>
int main()
{
    int n, i, key, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)//input the elements of the array
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++)//frequency counting algorithm
    {
        if(arr[i] == key)//if the key is found in the array
        {
            count++;
        }
    }
    if(count > 0)//if the key is found in the array
    {
        printf("Element found %d times in the array\n", count);
    }
    else
    {
        printf("Element not found in the array\n");
    }
    return 0;
}