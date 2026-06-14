#include<stdio.h>

int main()
{
    int n;

    printf("Enter the no. of elements you wanna enter in the array:");
    scanf("%d",&n);

    int arr[n];

    // Array Input
    for(int i=0;i<n;i++)
    {
        printf("%d. element:",i+1);
        scanf("%d",&arr[i]);
    }

    // Finding Duplicates and Output
    printf("Duplicate elements:");
    for(int i=0;i<n;i++)
    {
        int duplicate=0;
        for(int k=0;k<i;k++)
        {
            if(arr[i]==arr[k])
            {
                duplicate=1;
                break;
            }
        }
        if(duplicate)
            continue;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d ",arr[i]);
                break;
            }
        }
    }

    return 0;
}