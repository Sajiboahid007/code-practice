#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>store;
    int size;
    cout<<"Enter the array size = \n";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        int value;
        cin>>value;
        store.push_back(value);
    }
        for(int i=0;i<store.size();i++)
    {
        cout<<store[i]<<endl;
    }
    int choise;
    cout<<"Enter the searching value = \n";
    cin>>choise;
    for(int i=0;i<store.size();i++)
    {
       if(store[i]==choise)
        cout<<"we find the number the number is = "<<store[i]<<endl;
       else
        cout<<"we don't";
    }


}
