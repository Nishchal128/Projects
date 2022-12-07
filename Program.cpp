#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i;
    printf("Enter 10 Values \n");
    for(i=0; i<10; i++)
    {
        printf("Enter Value at %d Position \n",(i+1));
        scanf("%d",&a[i]);
    }
    printf("You have entered: \n");
     for(i=0; i<10; i++)
     {
        printf("%d\t",a[i]);
     }

    return 0;
}