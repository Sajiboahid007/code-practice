#include<bits/stdc++.h>
using namespace std;
class Array
{
private:
    int size;
    vector<int>storage;
public:
    Array(int x)
    {
        cout<<"parameterized constructor called\n";
        size=x;
    }
    Array()
    {
        cout<<"Enter your size"<<endl;
        cin>>size;
    }
    void Input()
    {
        for(int i=0;i<size;i++)
        {
            int x;
            cin>>x;
            storage.push_back(x);
        }
    }
    void Display()
    {
        cout<<"Your inputed Elements\n";
        for(int i=0;i<storage.size();i++)
            cout<<storage[i]<<" ";
        cout<<"\n";
    }
    void Reverse()
    {
        cout<<"Your inputed Elements in Reversed order\n";
        for(int i=size-1;i>=0;i--)
            cout<<storage[i]<<" ";
        cout<<endl;
    }
    void Summation()
    {
        int sum=0;
        for(int i=0;i<storage.size();i++)
        {
            sum+=storage[i];
        }
        cout<<"Summation is = "<<sum;
    }
};
int main()
{
    Array x;
    x.Input();
    x.Display();
    x.Reverse();
    x.Summation();
}
