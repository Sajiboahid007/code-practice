#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>testStack;
    testStack.push(10);
    testStack.push(9);
    testStack.push(8);
    testStack.push(7);
    while( ! testStack.empty()  )
    {
        cout<<"Every stack element is : "<<testStack.top()<<endl;
        testStack.pop();
    }
    testStack.pop();
    testStack.pop();

    //    while(! testStack.empty())
    //    {
    //        cout<<"Every stack element is : "<<testStack.top()<<endl;
    //        testStack.pop();
    //    }
    cout<<testStack.top();

}
