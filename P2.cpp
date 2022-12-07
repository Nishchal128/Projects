#include<iostream>
#include<conio.h>
using namespace std;
class Test
{
    public:
    int a,b,c;
    int show();
};
int Test::show()
{
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
}
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
    t1.show();
    t2.show();
    getch();
    return 0;

}