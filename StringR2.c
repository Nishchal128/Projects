#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    printf("Enter a Name:");
    gets(a);
    puts(strrev(a));
}