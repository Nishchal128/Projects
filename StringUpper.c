#include<stdio.h>
#include<string.h>

// ASCII Code of 'A' = ASCII Code of 'a' - 32

void main()
{
    char a[20];
    int i;
    printf("Enter a String: ");
    gets(a);

for(i=0; i< strlen(a); i++ )
 {

    if(a[i]>= 97 && a[i]<= 122)
    {
        printf("%c", a[i]-32);
    }
    else
    {
        printf("%c", a[i]);
    }
 }


}