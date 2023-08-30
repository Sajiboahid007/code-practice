#include<bits/stdc++.h>
using namespace std;
int main()
{
    int NumberSet[6]={12,32,43,54,1};
    int maximumNumber=NumberSet[0];
    for(int i=1;i<5;i++)
    {
        if(maximumNumber > NumberSet[i] )
        {
            maximumNumber=NumberSet[i];
        }
    }
    cout<<"Maximum number is :"<<maximumNumber<<endl;
}
