#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    vector<int>storeData;
    for(int i=0;i<size;i++)
    {
        int x;
        cin>>x;
        storeData.push_back(x);
    }
    int maximum= INT_MIN;
    int minimum= INT_MAX;
    for(int i=0;i<storeData.size();i++)
    {
//        if(maximum<storeData[i])
//        {
//            maximum=storeData[i];
//        }
//        if(minimum>storeData[i])
//        {
//            minimum=storeData[i];
//        }
        maximum = max(maximum, storeData[i]);
        minimum = min(minimum, storeData[i]);
    }
    cout<<"Maximum : "<<maximum<<endl;
    cout<<"Minimum : "<<minimum<<endl;
}

