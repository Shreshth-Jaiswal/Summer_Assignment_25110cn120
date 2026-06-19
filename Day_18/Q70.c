// Write a program to Selection sort.
#include <stdio.h>

void main()
{
    int n;

    printf("Enter the no. of element you wanna enter in the element:");
    scanf("%d",&n);

    int arr[n];

// Array Input
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

// Selection Sorting
    for(int i=0;i<n-1;i++)
    {
        int min=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }

        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

// Sorted Array Output
    printf("\n----After Sorting----");
    printf("\nArray[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);
}