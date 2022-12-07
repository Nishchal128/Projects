#include<stdio.h>
#include<conio.h>
struct student
{
    int roll;
    char name[10];
    float per;
};
void main()
{
    struct student s1;
     printf("Enter Roll No.");
     scanf("%d",&s1.roll);
     printf("Enter name");
     scanf("%s",&s1.name);
     printf("Enter Percentage");
     scanf("%f",&s1.per);
    
    printf("You have enterd:\n)");
    printf("Roll no.\t Name \t Percentage\n");
    {
        printf("%d\t %s\t %f\n",s1.roll,s1.name,s1.per);
    }
    getch();
}