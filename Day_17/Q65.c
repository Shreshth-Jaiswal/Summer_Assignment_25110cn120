// Write a program to Merge arrays.
#include <stdio.h>
void main()
{
    int n1,n2;

// 1st Array Input
    printf("Enter the no. of elements in first array:");
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr1[i]);
    }

// 2nd Array Input
    printf("Enter the no. of elements in second array:");
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr2[i]);
    }

// Merging Array
    int arr3[n1+n2];
    for(int i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }

    for(int i=0;i<n2;i++)
    {
        arr3[n1+i]=arr2[i];
    }

// 1st Array Output
    printf("\n1st Array[]={");
    for(int i=0;i<n1-1;i++)
    {
        printf("%d,",arr1[i]);
    }
    printf("%d}",arr1[n1-1]);

// 2nd Array Output
    printf("\n2nd Array[]={");
    for(int i=0;i<n2-1;i++)
    {
        printf("%d,",arr2[i]);
    }
    printf("%d}",arr2[n2-1]);

// Merged Array Output
    printf("\nMerged Array[]={");
    for(int i=0;i<n1+n2-1;i++)
    {
        printf("%d,",arr3[i]);
    }
    printf("%d}",arr3[n1+n2-1]);
}