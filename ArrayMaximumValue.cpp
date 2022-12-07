#include<iostream>
using namespace std;
int main()
{
    int a[10],i,max;
    cout<<"Enter the numbers in an array"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<"Enter the number at "<<(i+1)<<" position";
        cin>>a[i];
    }
    max=a[0];
    for(i=1;i<10;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<"Maximum Value="<<max;
}