#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=10,c=10,x;
    x=a++ == b-- || b++ == --c;
    printf("%d %d %d %d",a,b,c,x);
    getch();

}
