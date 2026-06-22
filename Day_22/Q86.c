// Write a program to Count words in a sentence.
#include<stdio.h>

void main()
{
    char str[1001];
    int words=1,i=0;

// String Input
    printf("Enter a sentence: ");
    gets(str);

// Counting Words
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            words++;
        }
        i++;
    }

// Output
    printf("\nNo. of words=%d",words);
}