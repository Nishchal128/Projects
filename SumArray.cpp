#include<iostream>
using namespace std;
int main()
{
    int a[10],i,sum=0;
    cout<<"Enter numbers in the array"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<"Enter the number at "<<(i+1)<<" position"<<endl;
        cin>>a[i];
        sum= sum + a[i];

    }
    cout<<"Sum="<<sum;

}