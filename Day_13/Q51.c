//Write a program to Find largest and smallest element.
#include<stdio.h>
int main()
{
    int i,n;

    printf("Enter the no. of element you wanna enter in the array:");
    scanf("%d",&n);

// Array Input
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }

// Largest Element
    int largest=arr[0];
    for(i=1;i<n;i++)
    {
        if(largest<arr[i])
        largest=arr[i];
    }

// Smallest Element
    int smallest=arr[0];
    for(i=1;i<n;i++)
    {
        if(smallest>arr[i])
        smallest=arr[i];
    }

// Output
    printf("Largest element=%d\nSmallest element=%d",largest,smallest);

    return 0;
}