#include<bits/stdc++.h>
using namespace std;
class Stack1
{
private:
    vector<int>Store;
public:
    void push(int n)
    {
        Store.push_back(n);
    }
    void pop()
    {
        int index=Store.size()-1;
        if(index < 0)
        {
            cout<<"Stack is empty"<<endl;
//            return;
        }
        Store.erase(Store.begin()+index);
    }
    int Peek()
    {
        int index=Store.size()-1;
        for(int i = index;i>=0;i--)
        {
            cout<<"Current top is: "<<Store[i]<<endl;
        }

    }
    int peek1()
    {
    int index = Store.size() - 1;
    if (index >= 0)
    {
        cout << "Current top is: " << Store[index] << endl;
        return Store[index];
    }
    cout << "Stack is empty" << endl;
    return INT_MIN;
    }

};
int main()
{

    Stack1 stack;
    stack.push(12);
    stack.push(13);
    stack.push(14);
    stack.pop();
    stack.peek1();





}
