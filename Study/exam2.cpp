#include<bits/stdc++.h>
using namespace std;
class Testall
{
public:
    int result;
    int x,y,z;

    Testall(int x,int y)
    {
        result=x+y;
    }
    Testall(int x,int y,int z)
    {
        result=x*y*z;
    }

    void display()
    {
        cout<<"Adding Result is: "<<result<<endl;
        return result;
    }
    Testall()
    {

    }
};
int main()
{

    Testall x(4,5);
    Testall x2(2,5,4);
    Testall y;

    x.display();
    x2.display();

}

