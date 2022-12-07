#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i;
    printf("Enter a string: ");
    gets(a);
    printf("Length=%d",strlen(a));
}