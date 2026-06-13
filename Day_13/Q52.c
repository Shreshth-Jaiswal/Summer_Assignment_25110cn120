// Write a program to Count even and odd elements.
#include<stdio.h>
int main()
{
    int n,even=0,odd=0;

    printf("Enter the no. of element you wanna enter in the array:");
    scanf("%d",&n);

// Array Input
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    } 

// Counting
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0 && arr[i]!=0)
        even+=1;
        else if(arr[i]!=0)
        odd+=1;
    }

// Output
    printf("\nNo. of even numbers:%d",even);
    printf("\nNo. of odd numbers:%d",odd);

    return 0;
}