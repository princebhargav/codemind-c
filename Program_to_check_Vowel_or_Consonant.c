#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'
    ||ch=='a'||ch=='e'||ch=='i'||ch=='u'||ch=='o')
    {
        printf("Vowel");
        
    }
    else
    {
        printf("Consonant");
        
    }
}