// Write a program to Find row-wise sum.
#include<stdio.h>

void main()
{
    int row,col;

    printf("Enter the no. of rows:");
    scanf("%d",&row);

    printf("Enter the no. of columns:");
    scanf("%d",&col);

    int arr[row][col];

// Matrix Input
    printf("\nEnter the elements of matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

// Matrix Output
    printf("\n----Matrix----\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

// Row-wise Sum and Output
    printf("\n----Row-wise Sum----\n");
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("Sum of Row %d = %d\n",i+1,sum);
    }
}