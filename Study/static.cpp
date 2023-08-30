#include<bits/stdc++.h>
using namespace std;
int test()
{
    static int a=0;
    a++;
    int b=0;
    b++;
    cout<<"A : "<<a<<"\n"<<"B : "<<b<<endl;
}
int main()
{
    test();
    test();
    test();
}
