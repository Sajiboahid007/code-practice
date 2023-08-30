#include<iostream>
using namespace std;
class Nesting
{
public:
    void printf1()
    {
        cout<<"hi there!";
    }
    void input()
    {
        int a;
        cin>>a;
        cout<<"your enter number id = "<<a;
    }
    void callfun()
    {
        printf1();
        input();
    }
};

int main()
{
    Nesting x;
    x.callfun();
}
