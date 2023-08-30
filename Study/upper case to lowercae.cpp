#include<bits/stdc++.h>
using namespace std;
int main()
{
    string info="UpperCse to LowerCase";
    for(int i=0;i<=info.size();i++)
    {
        if(isupper(info[i]))
        {
            info[i]=info[i]+32;
        }
    }
    cout<<info<<endl;

    string test="This is Testing Program!";
    for(int i=0;i<=test.size();i++)
    {
        if(isupper(test[i]))
        {
            test[i]=test[i]+32;
        }
    }
    cout<<test;
}
