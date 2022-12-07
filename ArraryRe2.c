#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    int i,j=0;
    printf("Enter a String: ");
    gets(a);
    for(i=(strlen(a)-1);i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    puts(a);
    puts(b);
}
