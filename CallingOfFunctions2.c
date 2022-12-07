#include <stdio.h>
#include <conio.h>
void abc();
void pqr();
void xyz();
int a=10;
void main()
{
    printf("%d\n",a);
    abc();
    a++;
    printf("%d\n",a);
    ++a;
    pqr();
    printf("%d\n",a);
    a++;
    xyz();
    printf("%d",a);
    getch();
}
void abc()
{
    pqr();
    printf("%d\n",a);
    a++;
}
void pqr()
{
    xyz();
    printf("%d\n",a);
    ++a;
}
void xyz()
{
    a++;
    printf("%d\n",a);
    ++a;
}
