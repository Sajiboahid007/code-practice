#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>test;
    test.push(5);
    test.push(4);
    test.push(1);
    test.pop();
    test.push(8);
    cout<<"top elements: "<<test.top();
}
