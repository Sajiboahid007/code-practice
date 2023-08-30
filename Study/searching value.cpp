#include<bits/stdc++.h>
using namespace std;

int main()
{
    int value;
    int size;
    bool found=false;
    vector<int>store;
    cout<<"Enter the size of array : \n";
    cin>>size;
    cout<<"input array : \n";
    for(int i=0;i<size;i++)
    {
        cin>>value;
        store.push_back(value);
    }
    cout<<"Here your array elements \n";
    for(int i=0;i<store.size();i++)
    {
        cout<<store[i]<<" ";
    }
    int pick;
    cout<<"choice number what you searching for \n";
    cin>>pick;
    for(int i=0;i<store.size();i++)
    {
        if(store[i]==pick)
        {
            cout<<"congratulation number is = "<<store[i];
            found=true;
            break;
        }
    }
      if(!found)
        cout<<"sorry can't find the number";

}
