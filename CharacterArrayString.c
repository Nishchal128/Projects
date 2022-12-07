#include<stdio.h>
void main()
{
    char a[10];
    int i;
    printf("Enter a name: ");
    for(i=0;i<10;i++)
    {
        a[i]=getchar();
        if(a[i]==10 || a[i]==13)
        {
            a[i]= '\0';
            break;
        }
       
    }
    printf("You have entered: ");
    i=0;
    while(a[i] != '\0')
    {
        printf("%c",a[i]);
        i++;
    }
}