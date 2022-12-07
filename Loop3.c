#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d",i);
        printf("/%d\t",i*i);
        i++;
    }
    getch();
}