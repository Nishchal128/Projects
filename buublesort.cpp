#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[5] = {5,1,4,2,8};
   int t;
   for(int i=0;i<5;i++)
   {
       for(int j=i+1;j<5;j++)
       {
           if(a[i]>a[j])
           {
               t=a[i];
               a[i]=a[j];
               a[j]=t; 
           }

       }
   }

   for(int i=0;i<5;i++)
   {
       cout<<a[i]<<" ";
   }

   return 0;

}