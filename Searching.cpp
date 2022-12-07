#include<iostream>
using namespace std;
int main()
{
    int a[]={50,60,70,80,40,30,20,10,90},i,n,f=0;
    cout<<"Enter any number";
    cin>>n;
    for(i=0;i<=10;i++)
    {
        if(a[i]==n)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        cout<<"Element Found at"<<i<<"index";
    }
    else
    {
        cout<<"Element not found";
    }
}