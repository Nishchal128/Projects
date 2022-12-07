#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,j,f=0;
    printf("Enter a String: ");
    gets(a);

    i=0;
    j= strlen(a)-1;
     while(i<j)
     {
        if(a[i]!=a[j])
        {
            f=1;
            break;
        }
        i++;
        j--;
     }
     if(f==0)
     {
        printf("String is Pallindrome");
    
     }
     else
     {
       printf("String is not pallindrome");
     }
}