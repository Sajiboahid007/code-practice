#include<bits/stdc++.h>
using namespace std;
class TestStack
{
private:
    vector<int>store;
public:
    void push()
    {
        int num;
        cout<<"Enter the push value: ";
        cin>>num;
        store.push_back(num);
    }
    void top()
    {
        int lastIndex=store.size()-1;
        if(lastIndex < 0)
        {
            cout<<"Current top is Empty"<<endl;
            return;
        }
        cout<<"Current top is : "<<store[lastIndex]<<endl;

    }
    void pop()
    {
        int lastIndex=store.size()-1;
        if(lastIndex < 0)
        {
            cout<<"Stack is underflow"<<endl;
        }
        store.erase(store.begin() + lastIndex);
    }
    void print()
    {
         int lastIndex=store.size()-1;
         for(int i=lastIndex;i>=0;i--)
         {
            cout<<"Stack Elements is : "<<store[i]<<endl;
         }

    }
};
int main()
{
    TestStack x;
    x.push();
    x.push();
    x.push();
    x.push();
    x.push();

    x.top();

    x.pop();
    x.pop();

    x.top();
    x.print();
}
