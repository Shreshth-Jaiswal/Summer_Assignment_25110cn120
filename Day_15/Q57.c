// Write a program to Reverse array.
#include<stdio.h>
void main()
{
    int i,n,temp;

    printf("Enter the no. of elements you wanna enter in the array:");
    scanf("%d",&n);

// Array Input
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }

// Array Output
    printf("\nArray[]={");
    for(i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);

// Array Revesed
    for(i=0;i<n/2;i++)
    {
        temp=arr[n-i-1];
        arr[n-i-1]=arr[i];
        arr[i]=temp;
    }

// Reversed Array Output
    printf("\nArray[]={");
    for(i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);
}