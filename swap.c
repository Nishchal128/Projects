#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,c;
    printf("Enter 2 Value");
    scanf("%d %d",&a,&b);
    printf("Before Swap a=%d and b=%d",a,b);
    c=a;
    a=b;
    b=c;
    p2rintf("After Swap a=%d and b=%d",a,b);
    getch ();
    
}