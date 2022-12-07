#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i;
    printf("Enter a String: ");
    gets(a);
    
    for(i=0; i< strlen(a); i++)
    {
        if(a[i]>= 65 && a[i]<= 90)
        {
           printf("%c",a[i]+32);
        }
        else
        {
           printf("%c",a[i]);
        }
    }

}