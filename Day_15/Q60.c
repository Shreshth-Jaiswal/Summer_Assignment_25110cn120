// Write a program to Move zeroes to end.
#include<stdio.h>
void main()
{
    int n;

    printf("Enter the no. of elements you wanna enter in the array:");
    scanf("%d",&n);

    int arr[n];

// Array Input
    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }

// Array Output
    printf("\nArray[]=");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d",arr[n-1]);

// Moving Zeroes To End
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
    }
    while(j<n)
    {
        arr[j]=0;
        j++;
    }

    // Result Output
    printf("\nArray[]=");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d",arr[n-1]);
}