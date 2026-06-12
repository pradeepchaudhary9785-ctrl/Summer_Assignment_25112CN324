//Write a program to linear search//
#include<stdio.h>
int main()
{
    int n, i, key, flag = 0;
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
    for(i = 0; i < n; i++)//linear search algorithm
    {
        if(arr[i] == key)//if the key is found in the array
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)//if the key is found in the array
    {
        printf("Element found at index %d\n", i);
    }
    else
    {
        printf("Element not found in the array\n");
    }
    return 0;
}