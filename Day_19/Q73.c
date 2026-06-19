// Write a program to Add matrices.
#include<stdio.h>
void main()
{
    int row,col;

    printf("Enter the no. of rows:");
    scanf("%d",&row);

    printf("Enter the no. of columns:");
    scanf("%d",&col);

    int arr1[row][col],arr2[row][col],sum[row][col];

// First Matrix Input
    printf("\nEnter the elements of first matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

// Second Matrix Input
    printf("\nEnter the elements of second matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

// Matrix Addition
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

// First Matrix Outout
    printf("\n----First Matrix----\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

// Second Matrix Outout
    printf("\n----Second Matrix----\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

// Matrix Addition Output
    printf("\n----After Addition----\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}