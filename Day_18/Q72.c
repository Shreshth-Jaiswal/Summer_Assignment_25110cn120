// Write a program to Sort array in descending order.
#include <stdio.h>
#include <stdlib.h>

int compare(const void*a,const void*b)
{
    return(*(int*)b-*(int*)a);
}

int main()
{

    int n;

    printf("Enter the no. of elements you wanna enter in the array:");
    scanf("%d",&n);

// Array Input
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }

// Input Array Output
    printf("\nArray[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);

// Qsort 

    qsort(arr,n,sizeof(int),compare);

// Sorted Array Output
    printf("\n----After Sorting----");
    printf("\nArray[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);
}