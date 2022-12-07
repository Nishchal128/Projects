#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,f=0;
    printf("Enter a Value");
    scanf("%d",&n);
    for(i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            f=1;
            break;

        }
    }

        if(f=1)
        {
            printf("Non-Prime");
       
        }
        else
        {
             printf("Prime");

        }
        getch();
}
           
        
        
    

    

