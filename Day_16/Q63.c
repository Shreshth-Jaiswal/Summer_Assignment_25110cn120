// Write a program to Find pair with given sum.
#include<stdio.h>
void main()
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
    printf("Array[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}\n",arr[n-1]);

// Input Sum
    int sum;
    printf("\nEnter sum to find pair:");
    scanf("%d",&sum);

// Finding pair
    for(int j=0;j<n;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if(arr[j]+arr[i]==sum)
            printf("(%d,%d)or",arr[j],arr[i]);
            
        }
    }
}