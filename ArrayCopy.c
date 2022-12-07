#include<stdio.h>
#include<string.h>
void main()
{
    char a[20], b[20];
    int i;
    printf("Enter a String: ");
    gets(a);
    for(i = 0;i <= strlen(a);i++)
    {
        b[i]=a[i];
    }
    puts(a);
    puts(b);

}