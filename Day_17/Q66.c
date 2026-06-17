// Write a program to Union of arrays.
#include <stdio.h>
#include <stdlib.h>
// Qsort
int compare(const void*a,const void*b)
{
    return(*(int*)a-*(int*)b);
}

void main()
{
    int n1,n2;

// 1st Array Input
    printf("Enter the no. of elements in first array:");
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr1[i]);
    }

// 2nd Array Input
    printf("Enter the no. of elements in second array:");
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr2[i]);
    }

// Merging Array
    int arr3[n1+n2],union_arr[n1+n2];
    for(int i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }

    for(int i=0;i<n2;i++)
    {
        arr3[n1+i]=arr2[i];
    }

// Sorting Merged Array
    qsort(arr3,n1+n2,sizeof(int),compare);

// Removing Duplicates form Sorted Merged Array
   int k=0;
    for(int i=0;i<n1+n2;i++)
    {
        union_arr[k]=arr3[i];
        for(int j=0;j<k;j++)
        {
            if(arr3[i]==union_arr[j])
            goto end;
            
        }
        k++;
        end:
        printf("");
    }

// 1st Array Output
    printf("\n1st Array[]={");
    for(int i=0;i<n1-1;i++)
    {
        printf("%d,",arr1[i]);
    }
    printf("%d}",arr1[n1-1]);

// 2nd Array Output
    printf("\n2nd Array[]={");
    for(int i=0;i<n2-1;i++)
    {
        printf("%d,",arr2[i]);
    }
    printf("%d}",arr2[n2-1]);

// Union Array Output
    printf("\nUnion Array[]={");
    for(int i=0;i<k-1;i++)
    {
        printf("%d,",union_arr[i]);
    }
    printf("%d}",union_arr[k-1]);
}