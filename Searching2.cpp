#include<iostream>
using namespace std;
int main()
{
    int a[]={50,40,20,10,30},i,j,temp;
    cout<<"Before Sorting";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
            temp= a[i];
            a[i]= a[j];
            a[j]= temp;
            }
        }
    }
    cout<<"After Sorting ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
}