#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i;
    printf("Enter a string: ");
    gets(a);
    for(i=(strlen(a)-1);i>=0;i--)
    {
        printf("%c",a[i]);
    }
}