// Write a program to Binary search.
#include<stdio.h>

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

// Sorting Array (Bubble Sort)
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

// Element to search
    int x;
    printf("Enter the no. you wanna search:");
    scanf("%d",&x);

// Binary Search
    int low=0,high=n-1,mid,flag=0;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==x)
        {
            flag=1;
            break;
        }
        else if(arr[mid]<x)
        low=mid+1;
        else
        high=mid-1;
    }

// Output
    if(flag==1)
     printf("The no. found");
    else
    printf("The no. not found");

    return 0;
}