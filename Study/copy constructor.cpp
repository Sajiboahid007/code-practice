#include<iostream>
using namespace std;
class A
{
public:
    int x;
    A(int a)
    {
        x=a;
    }
    A(A & s)
    {
        x=s.x;
    }
};
int main()
{
    A a1(2);
    A a2(a1);
    cout<<a2.x;
}
