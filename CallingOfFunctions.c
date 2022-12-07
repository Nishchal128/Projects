#include<stdio.h>
#include<conio.h>
void abc();
void pqr();
void xyz();
void main()
{
    printf("One\n");
    abc();
    printf("Two\n");
    pqr();
    printf("Three\n");
    xyz();
    printf("Four");
    getch();
}
    void abc()
    {
        pqr();
        printf("ABC\n");
    }
    void pqr()
    {
        xyz();
        printf("PQR\n");
    }
    void xyz()
    {
        printf("XYZ\n");
    }
