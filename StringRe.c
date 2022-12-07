#include<stdio.h>
#include<string.h>
void main()
{
    char a[20], b[20];
    printf("Enter a String: ");
    gets(a);

    strcpy(b,strrev(a));

    puts(strrev(a));
    puts(b);
}