#include<stdio.h>
#include<string.h>
void main()
{
    char a[20], b[20];
    int f;

    printf("Enter a String: ");
    gets(a);

    printf("Enter Second String: ");
    gets(b);


    f=strcmp(a,b);
    // strcmpi = for case sensitivity

    
    
    if(f==0)
    {
        printf("Both the strings are identical");
    }
    else
    {
        printf("Both the strings are different");
    }
}

    

