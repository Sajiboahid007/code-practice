#include<bits/stdc++.h>
using namespace std;
vector< int >testqueue;
void push(int number)
{
    if(testqueue.size() >= 5)
    {
        cout<<"Queue is full"<<endl;
        return;
    }
    testqueue.push_back(number);
}
void peek()
{
    cout<<"elements :"<<testqueue[0];
}
int main()
{
    push(12);
    push(13);
    push(14);
    push(15);
    push(16);
    push(17);
    push(18);
    peek();
}
