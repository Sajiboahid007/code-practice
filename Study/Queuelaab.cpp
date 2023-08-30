#include<bits/stdc++.h>
using namespace std;
vector<int>Queue;
void enqueue(int number)
{
    if(Queue.size() >= 5)
    {
        cout<<"Queue is full!"<<endl;
    }
    Queue.push_back(number);
}
void printqueue()
{
//    int indexsize=Queue.size();
//    if(indexsize==0)
//    {
//        cout<<"Queue is empty!";
//    }
    cout<<"Queue elements: "<<Queue[0]<<endl;
}
void deQueue()
{
//    int indexsize=Queue.size();
//    if(indexsize==0)
//    {
//        cout<<"Queue is full: ";
//    }
    Queue.erase(Queue.begin()+0);
}
void allprint()
{
    for(int i=0;i<Queue.size();i++)
    {
        cout<<"Queue Elements: "<<Queue[i]<<endl;
    }
}
int main()
{
    enqueue(12);
    enqueue(13);
    enqueue(14);
    enqueue(15);
    enqueue(16);
    enqueue(17);
    enqueue(18);
    deQueue();
    deQueue();
    printqueue(); //front elements
//    cout<<"-------------***----------"<<endl;
//    allprint();
}






