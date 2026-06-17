// Write a program to Intersection of arrays.
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
    int arr1[n1],temp_arr1[n1];
    for(int i=0;i<n1;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr1[i]);
    }

// 2nd Array Input
    printf("Enter the no. of elements in second array:");
    scanf("%d",&n2);
    int arr2[n2],temp_arr2[n2];
    for(int i=0;i<n2;i++)
    {
        printf("%d element:",i+1);
        scanf("%d",&arr2[i]);
    }

// Sorting Both Array
    qsort(arr1,n1,sizeof(int),compare);
    qsort(arr2,n2,sizeof(int),compare);

// Removing Duplicates form Both Sorted Array
   int k=0;
    for(int i=0;i<n1;i++)
    {
        temp_arr1[k]=arr1[i];
        for(int j=0;j<k;j++)
        {
            if(arr1[i]==temp_arr1[j])
            goto end1;
            
        }
        k++;
        end1:
        printf("");
    }
    int l=0;
    for(int i=0;i<n2;i++)
    {
        temp_arr2[l]=arr2[i];
        for(int j=0;j<l;j++)
        {
            if(arr2[i]==temp_arr2[j])
            goto end2;
            
        }
        l++;
        end2:
        printf("");
    }

// Intersection of arrays
    int inter_arr[k+l],m=0;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<l;j++)
        {
            if(temp_arr1[i]==temp_arr2[j])
            {
                inter_arr[m]=temp_arr1[i];
                m++;
            }
        }
    }
    if(m==0)
    {
        printf("\nIntersection Array[]={}");
        goto end;
    }

//  Intersection Array Output
    printf("\nIntersection Array[]={");
    for(int i=0;i<m-1;i++)
    {
        printf("%d,",inter_arr[i]);
    }
    printf("%d}",inter_arr[m-1]);

    end:
    printf("");
}