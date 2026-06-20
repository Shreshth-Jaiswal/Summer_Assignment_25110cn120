// Write a program to Check symmetric matrix.
#include<stdio.h>

void main()
{
    int n,flag=1;

    printf("Enter the order of square matrix:");
    scanf("%d",&n);

    int arr[n][n];

// Matrix Input
    printf("\nEnter the elements of matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

// Matrix Output
    printf("\n----Matrix----\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

// Checking Symmetry
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
        break;
    }

// Output
    if(flag==1)
    {
        printf("\nThe matrix is symmetric");
    }
    else
    {
        printf("\nThe matrix is not symmetric");
    }
}