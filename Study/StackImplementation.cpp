#include<bits/stdc++.h>
using namespace  std;

class Stack{
private:
    vector<int> storage;
public:
//    void push()
//    {
//        int number;
//        cout << "Enter a number to push into stack\n";
//        cin >> number;
//        storage.push_back(number);
//    }
//
//
//
//    void pop()
//    {
//        int lastIndex = storage.size() - 1;
//        if(lastIndex < 0 ){
//            cout << "Stack is underflow\n";
//            return;
//        }
//        storage.erase(storage.begin() + lastIndex);
//    }
//    void Top()
//    {
//        int lastIndex = storage.size() - 1;
//        if(lastIndex < 0 ){
//             cout << "Stack is empty\n";
//            return;
//        }
//        cout << "Current Top " << storage[lastIndex] << endl;
//    }
//    void PrintAll(){
//        int lastIndex = storage.size() - 1;
//        for(int i = lastIndex; i >= 0; i--)
//        {
//            cout << "Current Top " << storage[i] << endl;
//        }
//    }



    void push(int number)
    {
        storage.push_back(number);
    }

    void pop()
    {
        int lastIndex = storage.size() - 1;
        if(lastIndex < 0 ){
            cout << "Stack is underflow\n";
            return;
        }
        storage.erase(storage.begin() + lastIndex);
    }
    int top()
    {
        int lastIndex = storage.size() - 1;
        if(lastIndex < 0 ){
             cout << "Stack is empty\n";
            return lastIndex;
        }
        return storage[lastIndex];
    }
    void printAll(){
        int lastIndex = storage.size() - 1;
        for(int i = lastIndex; i >= 0; i--)
        {
            cout << "Current Top " << storage[i] << endl;
        }
    }
};

int main()
{
    Stack stack;

    stack.top();

    stack.push(12);
    stack.push(13);
    stack.push(1);
    stack.push(2);
    stack.push(3);


    stack.top();

    stack.pop();
    stack.pop();
    stack.pop();

    stack.top();

//    stack.PrintAll();


}
