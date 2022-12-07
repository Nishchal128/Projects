#include<stdio.h>
#include<string.h>
void main()
{
    char a[20], b[20];
    int i,f=0;

    printf("Enter a String: ");
    gets(a);

    printf("Enter Second String: ");
    gets(b);

    if(strlen(a)!=strlen(b))
    {
        f=1;
    }
    else
    {
        for(i=0; i < strlen(a); i++)
        {
            if(a[i]!=b[i])
            {
              f=1;
              break;
            }
        }
    }
    if(f==0)
    {
        printf("Both the strings are identical");
    }
    else
    {
        printf("Both the strings are different");
    }

    
}
