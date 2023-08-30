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
        cout<<"parameterized constructor \n";
        size=x;
    }
    Array()
    {
        cout<<"Enter your size \n";
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
        cout<<"Your inputed Elements \n";
        for(int i=0;i<storage.size();i++)
        {
            cout<<storage[i]<<" ";
        }
        cout<<"\n";
    }
    void Reverse()
    {
        cout<<"Your Reverse Elements \n";
        for(int i=size-1;i>=0;i--)
        {
            cout<<storage[i]<<" ";
        }
        cout<<"\n";
    }
    void Summation()
    {
        int sum=0;
        cout<<"Summation is = ";
        for(int i=0;i<storage.size();i++)
        {
            sum+=storage[i];
        }
         cout<<sum<<" ";
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
