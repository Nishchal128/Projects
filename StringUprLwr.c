#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    printf("Enter a String: ");
    gets(a);

    puts(a);
    puts(strupr(a));
    puts(strlwr(a));
}