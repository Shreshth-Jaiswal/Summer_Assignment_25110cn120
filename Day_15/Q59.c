// Write a program to Rotate array right.
#include<stdio.h>
void main()
{
    int n,r,temp;

    printf("Enter the no. of elements you wanna enter in the array:");
    scanf("%d",&n);

    int arr[n];

// Array Input
    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter no. of rotation:");
    scanf("%d",&r);

// Array Output
    printf("\nArray[]=");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d",arr[n-1]);

 // Right Rotation
    for(int k=0;k<r;k++)
    {
        temp=arr[n-1];

        for(int i=n-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }

// Rotated Array Output
    printf("\nArray[]=");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d",arr[n-1]);
}
