#include<bits/stdc++.h>
using namespace  std;

class Stack{
private:
    vector<int> storage;
public:
    void Push()
    {
        int number;
        cout << "Enter a number to push into stack\n";
        cin >> number;
        storage.push_back(number);
    }

    void Pop()
    {
        int lastIndex = storage.size() - 1;
        if(lastIndex < 0 ){
            cout << "Stack is underflow\n";
            return;
        }
        storage.erase(storage.begin() + lastIndex);
    }
    void Top()
    {
        int lastIndex = storage.size() - 1;
        cout << "Current Top " << storage[lastIndex] << endl;
    }

};

int main()
{
    Stack stack;

    stack.Push();
    stack.Top();
    stack.Pop();
    stack.Pop();

}