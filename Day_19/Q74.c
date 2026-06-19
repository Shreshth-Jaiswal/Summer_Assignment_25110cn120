// Write a program to Subtract matrices.
#include<stdio.h>

void main()
{
    int row,col;

    printf("Enter the no. of rows:");
    scanf("%d",&row);

    printf("Enter the no. of columns:");
    scanf("%d",&col);

    int arr1[row][col],arr2[row][col],sub[row][col];

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

// Matrix Subtraction
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            sub[i][j]=arr1[i][j]-arr2[i][j];
        }
    }

// First Matrix Output
    printf("\n----First Matrix----\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

// Second Matrix Output
    printf("\n----Second Matrix----\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

// Matrix Subtraction Output
    printf("\n----After Subtraction----\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
}