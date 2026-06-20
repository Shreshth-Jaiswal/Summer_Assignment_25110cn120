// Write a program to Count vowels and consonants.
#include<stdio.h>

void main()
{
    char str[1001];
    int vowels=0,consonants=0,i=0;

// String Input
    printf("Enter a string: ");
    gets(str);

// Counting Vowels and Consonants
    while(str[i]!='\0')
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
            if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        i++;
    }

// Output
    printf("\nNo. of vowels=%d",vowels);
    printf("\nNo. of consonants=%d",consonants);
}