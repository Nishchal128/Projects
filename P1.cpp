#include<iostream>
#include<conio.h>
using namespace std;
class Test
{
    public:
    int a,b,c;
};
int main()
{
    Test t1;
    Test t2;
    t1.a=10;
    t1.b=20;
    t1.c=30;
    t2.a=100;
    t2.b=200;
    t2.c=300;
    cout<<t1.a<<"\t"<<t1.b<<"\t"<<t1.c<<endl;
    cout<<t2.a<<"\t"<<t2.b<<"\t"<<t2.c<<endl;
    getch();
    return 0;

}

