// Write a program to Find maximum frequency element.
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
    printf("\nArray[]={");
    for(int i=0;i<n-1;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("%d}",arr[n-1]);
    
// Frequency of elements and Output
    int j=0;
    for(int k=0;k<n;k++)
    {
        temp_arr[j]=arr[k];
        for(int i=0;i<j;i++)
        {
            if(temp_arr[i]==arr[k])
            goto end;
        }
        j++;
        int flag=0,freq=0;
        printf("\nThe no. %d is in positions- ",arr[k]);
        for(int i=0;i<n;i++)
        {
            if(arr[i]==arr[k])
            {
                printf("%d,",i+1);
                freq+=1;
                flag=1;
            }
        }
        printf(" and that will be total %d times.",freq);
        end:
        printf("");
    }
}