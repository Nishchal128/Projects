#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10],i;
    printf("Enter 10 Values in Array \n");
    for(i=0;i<=9;i++)
    {
        printf("Enter the value at %d position \n",(i+1));
        scanf("%d",&a[i]);
    }
    printf("Elements in reverse order: \n");
    for(i=9;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }    
    return 0;
}