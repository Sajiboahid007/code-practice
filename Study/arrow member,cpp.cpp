#include<bits/stdc++.h>
using namespace std;
class sally
{
public:
    void printCrap()
    {
        cout<<"print something"<<endl;
    }
};
int main()
{
    sally sallyobj;
    sally *sallypointer = &sallyobj;

    sallyobj.printCrap();
    sallypointer->printCrap();

}

