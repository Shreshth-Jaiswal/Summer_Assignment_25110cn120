// Write a program to Remove duplicates from array.
#include<stdio.h>
void main()
{
    int n;

    printf("Enter the no. of elements you wanna enter in the array:");
    scanf("%d",&n);

// Array Input
    int arr[n],temp_arr[n];
    for(int i=0;i<n;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr[i]);
    }

// Input Array Output
    printf("Array[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);
    
// Removing Duplicates
   int k=0;
    for(int i=0;i<n;i++)
    {
        temp_arr[k]=arr[i];
        for(int j=0;j<k;j++)
        {
            if(arr[i]==temp_arr[j])
            goto end;
            
        }
        k++;
        end:
        printf("");
    }
// Removed Duplicates Output
    printf("\nArray[]={");
    for(int i=0;i<k-1;i++)
    {
        printf("%d,",temp_arr[i]);
    }
    printf("%d}",temp_arr[k-1]);
}