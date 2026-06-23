// Write a program to Check anagram strings.
#include<stdio.h>
void main()
{
    char str1[101],str2[101];
    int len1=0,len2=0,flag=1;

// Both Strings Input
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

// Finding Lengths
    while(str1[len1]!='\0')
    {
        len1++;
    }
    while(str2[len2]!='\0')
    {
        len2++;
    }

// Length Check
    if(len1!=len2)
    {
        printf("\nStrings are not anagrams");
        return;
    }

// Character Frequency Check
    for(int i=0;i<len1;i++)
    {
        int count1=0,count2=0;
        for(int j=0;j<len1;j++)
        {
            if(str1[i]==str1[j])
            count1++;
            if(str1[i]==str2[j])
            count2++;
        }
        if(count1!=count2)
        {
            flag=0;
            break;
        }
    }

// Output
    if(flag==1)
    printf("\nStrings are anagrams");
    else
    printf("\nStrings are not anagrams");
}