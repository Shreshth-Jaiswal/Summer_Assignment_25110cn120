// Write a program to Find missing number in array.
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
    printf("\nArray[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);

// Missing Numbers Output
    int left=arr[0];
    printf("\nMissing numbers are- ");
    for(int i=1;i<n;i++)
    {
        int j=1;
        start:
        if(arr[i]!=left+j)
        printf("%d,",left+j);
        if(left+j!=arr[i])
        {
            j++;
            goto start;
        }
        left=arr[i];
    }
}