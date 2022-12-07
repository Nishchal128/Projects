// Pallindrome means that the reverse of a string is equal to string.
#include<stdio.h>
#include<string.h>
void main()
{
    char a[20], b[20];
    int i, j=0,f=0;
    printf("Enter a string: ");
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
    for(i = (strlen(a)-1); i > 0; i--)
    {
       b[j]=a[i];
       j++;
    }
    b[j]='\0';
    j=0;
    for(i=0;i < (strlen(a)-1);i++)
    {
        if(a[i]!=b[j])
        {
            f=1;
            break;
        }
        j++;
    }
    if(f==0)
    {
        printf("String is pallindrome");
    }
    else
    {
        printf("String is not pallindrome"); 
    }
}