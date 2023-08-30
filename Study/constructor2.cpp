#include<bits/stdc++.h>
using namespace std;
class Greater
{
public:
    int a,b;
    Greater(int x,int y)
    {
        a=x;
        b=y;
        if(a>b)
        {
            cout<<"A is greater";
        }
        else
            cout<<"B is greater";
    }
};

int main()
 {
     Greater x(12,43);
 }
