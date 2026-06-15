// Write a program to Rotate array left.
#include<stdio.h>
void main()
{
    int n,r,temp;

    printf("Enter the no. of elements you wanna enter in the array:");
    scanf("%d",&n);

// Array and rotation Input
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter no. of rotation:");
    scanf("%d",&r);

    int temp_arr[r];

// Array Output
    printf("\nArray[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);

// Array rotation
    for(int i=0;i<r;i++)
    {
        temp_arr[i]=arr[i];
    }
    for(int k=0;k<r;k++)
    {
        int j=1;
        for(int i=0;i<n-1;i++)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
        }
    }
    for(int i=r;i<r;i++)
    {
        int j=0;
        arr[i]=temp_arr[j];
        j++;
    }

// Reversed Array Output
    printf("\nArray[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);
}