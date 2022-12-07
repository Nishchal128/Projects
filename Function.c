#include <stdio.h>
#include <conio.h>
void pyramid();
void main()
{
    printf("Nishchal Vyas\n");
    pyramid();
    printf("Acropolis\n");
    pyramid();
    printf("City");
    pyramid();
    getch();
}
void pyramid()
    {
        int i,j;
        for(i=1;i<=5;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
