#include<iostream>
using namespace std;
int main()
{
    int a[10],i,min;
    cout<<"Enter the numbers in array"<<endl;
    for(i=0;i<10;i++)
    {
        cout<<"Enter the number at "<<(i+1)<<" position"<<endl;
        cin>>a[i];
    }
    // assume first element to be the minimum
    min=a[0];
    for(i=1;i<10;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<"Minimum Value="<<min;

}