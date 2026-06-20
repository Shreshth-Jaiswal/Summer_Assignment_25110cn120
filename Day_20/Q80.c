// Write a program to Find column-wise sum.
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

// Column-wise Sum and Output
    printf("\n----Column-wise Sum----\n");
    for(int j=0;j<col;j++)
    {
        int sum=0;
        for(int i=0;i<row;i++)
        {
            sum=sum+arr[i][j];
        }
        printf("Sum of Column %d = %d\n",j+1,sum);
    }
}