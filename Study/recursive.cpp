#include<bits/stdc++.h>
using namespace std;

int facturial(int num)
{
    if(num==1)
        return 1;
    else
        return num*facturial(num - 1);
}

int main()
{
    cout<<facturial(5)<<endl;
}

