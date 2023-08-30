#include<bits/stdc++.h>
using namespace std;
int main()
{
    int student;
    cout<<"Enter size :";
    cin>>student;
    vector<int>store;
    cout<<"Enter the value of array"<<endl;
    for(int i=0;i<student;i++)
    {
        int x;
        cin>>x;
        store.push_back(x);
    }
    cout<<"--------------------------------------\n";
    cout<<"Elements of array "<<endl;
    for(int i=0;i<store.size();i++)
    {
        cout<<store[i]<<" "<<endl;
    }
    int positon,value;
    cout<<"Enter the position :"<<endl;
    cin>>positon;
    cout<<"Enter the value :"<<endl;
    cin>>value;
    for(int i=store.size()-1;i>=positon-1;i--)
    {
        store[i+1]=store[i];
        store[i]=value;
    }
    cout<<"--------Final array is-----------"<<endl;
    for(int i=0;i<store.size();i++)
    {
        cout<<store[i]<<endl;
    }
}
