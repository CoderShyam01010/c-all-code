#include<stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30];
    printf("enter s1: ");
    gets(s1);
    puts(s1);
    printf("enter s2: ");
    gets(s2);
    puts(s2);
    strcat(s2,s1);
    puts(s1);
    puts(s2);
}