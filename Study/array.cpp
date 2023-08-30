#include<bits/stdc++.h>
using namespace std;
class info
{
private:
    string name,department;
    int id;
    void getinfo()
    {
        cout<<"Enter your Name: "<<endl;
        cin>>name;
        cout<<"Enter your Department: "<<endl;
        cin>>department;
        cout<<"Enter your Roll "<<endl;
        cin>>id;
    }
public:
    void printinfo()
    {
        getinfo();
        cout<<"Your name is : "<<name<<endl;
        cout<<"Your Department is : "<<department<<endl;
        cout<<"Your Roll is : "<<id<<endl;
    }
};
int main()
{
    info x;
    x.printinfo();
}
