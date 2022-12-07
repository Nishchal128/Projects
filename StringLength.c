#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i=0;
    printf("Enter a name: ");
    gets(a);
    puts(a);
    while(a[i]!='\0')
    {
        i++;
    }
    printf("Length= %d",i);
}