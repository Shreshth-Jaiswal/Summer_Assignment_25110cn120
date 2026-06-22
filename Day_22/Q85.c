// Write a program to Check palindrome string.
#include<stdio.h>

void main()
{
    char str[1001];
    int len=0,flag=1;

// String Input
    printf("Enter a string: ");
    gets(str);

// Finding Length
    while(str[len]!='\0')
    {
        len++;
    }

// Palindrome Check
    for(int i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            flag=0;
            break;
        }
    }

// Output
    if(flag==1)
    printf("\nThe string is palindrome");
    else
    printf("\nThe string is not palindrome");

}