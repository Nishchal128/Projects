#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40,50,60,70,80,90,100},low=0,high=9,mid,n,f=0;
    cout<<"Enter any number: ";
    cin>>n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==n)
        {
            f=1;
            break;
        }
        else if(n>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    if(f==1)
    {
        cout<<"Element Found";
    }
    else
    {
        cout<<"Element not found";
    }
}