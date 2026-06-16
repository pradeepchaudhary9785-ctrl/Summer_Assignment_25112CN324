//Write a program to selection sort//
#include<stdio.h>
int main(){
    int a[50],n,i,j,temp;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the list of elements:\n");
    for(i=0;i,n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The sorted array:\n");
    for(i=0;i<n;i++){ 
        printf("%d",a[i]);
    }
    return 0;
}