// Write a program to Second largest element.
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
        printf("%d. elemant:",i+1);
        scanf("%d",&arr[i]);
    }

// Finding Second Largest element
    int largest=arr[0];
    int largest_2=arr[0];
    for(int i=1;i<n;i++)
    {
        if(largest<arr[i])
        largest=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=largest)
        {
            if(largest_2<arr[i])
            largest_2=arr[i];
        }
    }

// Output
    printf("Second largest element=%d",largest_2);

    return 0;
}