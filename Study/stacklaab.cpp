#include<bits/stdc++.h>
using namespace std;

vector<int>storage;
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
        return INT_MAX;
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
int main()
{
    push(1);
    push(1);
    push(1);
    push(1);
    push(1);
    pop();
    pop();
    pop();
    printAll();

}







