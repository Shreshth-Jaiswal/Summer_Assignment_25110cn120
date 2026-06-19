// Write a program to Transpose matrix.
// Write a program to Transpose matrix.
#include<stdio.h>

void main()
{
    int row,col;

    printf("Enter the no. of rows:");
    scanf("%d",&row);

    printf("Enter the no. of columns:");
    scanf("%d",&col);

    int arr[row][col],trans[col][row];

// Matrix Input
    printf("\nEnter the elements of matrix:\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

// Transpose Matrix
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            trans[j][i]=arr[i][j];
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

// Transpose Matrix Output
    printf("\n----Transpose Matrix----\n");
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
}