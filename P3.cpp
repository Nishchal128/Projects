#include<iostream>
#include<conio.h>
using namespace std;
class Test
{
    public:
    int a,b,c;
    int show()
    {
        cout<<a<<"\t"<<b<<"\t"<<c<<endl;
    }

int setdata(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
    
}
};
int main()
 {
    Test t1;
    Test t2;
    t1.setdata(10,20,30);
    t2.setdata(100,200,300);
    t1.show();
    t2.show();
    getch();
    return 0;
 }


