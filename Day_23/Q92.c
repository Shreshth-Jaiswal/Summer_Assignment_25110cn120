// Write a program to Find maximum occurring character.
#include<stdio.h>

void main()
{
    char str[1001];
    int max=0;
    char max_char;

// String Input
    printf("Enter a string: ");
    gets(str);

// Finding Maximum Frequency
    for(int i=0;str[i]!='\0';i++)
    {
        int count=0;
        for(int j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            count++;
        }
        if(count>max)
        {
            max=count;
        }
    }

// Printing All Maximum Occurring Character
    for(int i=0;str[i]!='\0';i++)
    {
        int count=0;
        for(int j=i;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            count++;
        }
        if(count==max)
        {
            max_char=str[i];
            printf("\nMaximum Occurring Character = %c",max_char);
            printf("\nIts Frequency is = %d",max);
        }
    }
}