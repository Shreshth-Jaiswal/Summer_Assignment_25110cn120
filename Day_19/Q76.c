// Write a program to Find diagonal sum.
#include<stdio.h>

void main()
{
    int n,sum=0;

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

// Diagonal Sum
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i][i];
    }

// Output
    printf("\nDiagonal Sum=%d",sum);
}