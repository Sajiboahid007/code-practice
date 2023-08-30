#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maximunNumber[]={1,3,5,7,96,53};
    int arraysize=sizeof(maximunNumber)/sizeof(maximunNumber[0]);
    int maxi=maximunNumber[0];
    for(int i=0;i<arraysize;i++)
    {
        if(maxi< maximunNumber[i])
        {
            maxi= maximunNumber[i];
        }
    }
    cout<< maxi;
}
