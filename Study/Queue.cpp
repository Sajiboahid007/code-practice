#include<bits/stdc++.h>
using namespace std;
class Queue
{
private:
    vector<int>save;
public:
    void Push()
    {
        int number;
        cout<<"Push your data :";
        cin>>number;
        save.push_back(number);
    }
    void Front()
    {
        int queueSize=save.size();
        if(queueSize == 0)
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }

        cout<<"Front Elements is = "<<save[0]<<endl;
    }
    void Dequeue()
    {
        int queueSize=save.size();
        if(queueSize == 0)
        {
            cout<<"Queue is Empty!"<<endl;
            return;
        }
        save.erase(save.begin() + 0);
    }
    void print()
    {
        int queueSize=save.size();
        for(int i=0; i<save.size();i++)
        {
            cout<<"Queue Elements are = "<<save[i]<<endl;
        }
    }
};
int main()
{
    Queue queuE;
    queuE.Push();
    queuE.Push();
    queuE.Push();
    queuE.Push();
    queuE.Front();

    queuE.Dequeue();
    queuE.Dequeue();

    queuE.Front();
    queuE.print();
}
