#include<iostream>
using namespace std;
class Test
{
public:
    int a,b;
    double c,d;
    void area(int x,int y)
    {
        a=x;
        b=y;
        cout<<"Area of Rectangle "<<a*b<<endl;
    }
    void area(double x,double y)
    {
     c=x;
     d=y;
     cout<<"Area of triangle "<<.5*c*d<<endl;
    }
};
int main()
{
    Test x;
    x.area(10,10);
    x.area(10.0,10.0);
    //x.area(a, b);
}
