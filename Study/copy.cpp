#include<iostream>
using namespace std;
class Copy
{
public:
    int a;
    Copy (int x)
    {
        a=x;
    }
    Copy (Copy & i)
    {
        a=i.a;
    }

};
int main()
{
    Copy x(29);
    Copy y(x);
    cout<<y.a;
}
