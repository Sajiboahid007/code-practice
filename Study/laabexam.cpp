#include <iostream>
using namespace std;

#define size 3
int stack[size];
int top = -1;

void push(int x)
{
    if (top < size - 1)
    {
        top = top + 1;
        stack[top] = x;
        cout << "Successfully added item: " << x << endl;
    }
    else
    {
        cout << "Exception! No Spaces" << endl;
    }
}

int pop()
{
    if (top >= 0)
    {
        int var = stack[top];
        top = top - 1;
        return var;
    }
    cout << "Exception from pop! Empty stack" << endl;
    return -1;
}

int peek()
{
    if (top >= 0)
    {
        return stack[top];
    }
    cout << "Exception from peek! Empty stack" << endl;
    return -1;
}

int main()
{
    cout << "Implementation my stack in C++" << endl;
    peek();
    push(10);
    push(20);
    push(30);
    cout << "Pop item: " << pop() << endl;
    push(40);
    cout << "Top of Stack: " << peek() << endl;
    return 0;
}

