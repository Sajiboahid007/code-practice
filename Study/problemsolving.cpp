#include<bits/stdc++.h>
using namespace std;
int main()
{
    string info="My    name                                  is Sajib";
    for(int i=0;i<info.size();i++)
    {
        if(info[i]==' ') continue;
        cout <<info[i];
    }
    cout<<endl;
    string test="this       is testing Program!";
    for(int i=0;i<=test.size();i++)
    {
        if(test[i]==' ') continue;
        cout<<test[i];
    }
}
