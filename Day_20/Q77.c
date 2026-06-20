// Write a program to Multiply matrices.
#include<stdio.h>

void main()
{
    int row1,col1,row2,col2;

    printf("Enter the no. of rows of first matrix:");
    scanf("%d",&row1);

    printf("Enter the no. of columns of first matrix:");
    scanf("%d",&col1);

    printf("Enter the no. of rows of second matrix:");
    scanf("%d",&row2);

    printf("Enter the no. of columns of second matrix:");
    scanf("%d",&col2);

    if(col1!=row2)
    {
        printf("Matrix multiplication not possible");
        return;
    }

    int arr1[row1][col1],arr2[row2][col2],mul[row1][col2];

// First Matrix Input
    printf("\nEnter the elements of first matrix:\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

// Second Matrix Input
    printf("\nEnter the elements of second matrix:\n");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

// Matrix Multiplication
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            mul[i][j]=0;

            for(int k=0;k<col1;k++)
            {
                mul[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

// First Matrix Output
    printf("\n----First Matrix----\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

// Second Matrix Output
    printf("\n----Second Matrix----\n");
    for(int i=0;i<row2;i++)
    {
        for(int j=0;j<col2;j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

// Matrix Multiplication Output
    printf("\n----After Multiplication----\n");
    for(int i=0;i<row1;i++)
    {
        for(int j=0;j<col2;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}