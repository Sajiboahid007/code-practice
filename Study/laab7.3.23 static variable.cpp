#include<iostream>
using namespace std;
void example()
{
    static int a;
    int b=0;
    a++;
    b++;
    cout <<"A="<<a<<" "<<"b="<<b<<endl;
}
int main()
{
    example();
    example();
}
