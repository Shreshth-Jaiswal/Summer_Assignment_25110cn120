// Write a program to Input and display array.
#include<stdio.h>
int main()
{
    int n;

    printf("Enter the no. of element you wanna enter in the array:");
    scanf("%d",&n);

    int arr[n];

// Array Input
    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    } 

// Array Output
    printf("arr[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);

    return 0;
}