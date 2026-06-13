// Write a program to Find sum and average of array.
#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("Enter the no. of element you wanna enter in the array:");
    scanf("%d",&n);

// Array Input
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }

// Sum of array elements
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }

// Output
    printf("Sum of the elements = %d",sum);
    printf("\nAverage of array = %d",sum/n);

return 0;
}