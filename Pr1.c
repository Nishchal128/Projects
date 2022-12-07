#include <stdio.h>
#include <conio.h>

int main()
{
    int amount;
  
    // taking input   
    printf("Enter the amount to be withdrawn (in thousands): ");
    scanf("%d",&amount);
   
    //calculations
    printf("\n\nRequired notes of Rs. 1000  :  %d", amount / 1000);
   
   
    printf("\n\nRequired notes of Rs. 500   :  %d", (amount % 1000) / 500);
    
   
    printf("\n\nRequired notes of Rs. 100   :  %d", (((amount % 1000) % 100) / 100));

   
    printf("\n\nRequired notes of Rs. 50 :  %d", ((((amount % 1000) % 100) % 100) / 50));

    
    printf("\n\nRequired notes of Rs. 10 :  %d", (((((amount % 1000) % 100) % 100) / 10)));


    printf("\n\nRequired notes of Rs. 5 :  %d", ((((((amount % 1000) % 100) % 100) % 50)%10)/5));


    printf("\n\nRequired notes of Rs. 2 :  %d", (((((((amount % 1000) % 100) % 100) % 50)%10)%5)/2));
    

    printf("\n\nRequired notes of Rs. 1:  %d", (((((((amount % 1000) % 100) % 100) % 50)/10)%5)));


   
    getch();
}

