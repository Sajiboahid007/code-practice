#include<bits/stdc++.h>
using namespace std;
int facturial (int number)
{
    if(number==1)
    {
        return 1;
    }
    else
        return number *facturial(number - 1);
}

int main()
{
  cout<<facturial(5)<<endl;
}
