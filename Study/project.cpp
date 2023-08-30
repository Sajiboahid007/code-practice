#include<bits/stdc++.h>
using namespace std;
string name,department;
int id,roll;
void input()
{
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter Department: "<<endl;
        cin>>department;
        cout<<"Enter Id: "<<endl;
        cin>>id;
    }
}
void output()
{
    cout<<"Name is : "<<name<<endl;
    cout<<"Department is : "<<department<<endl;
    cout<<"Id is : "<<id<<endl;
}
void search()
{
    cout<<"Enter your searching Roll: "<<endl;;
    cin>>roll;
    if(roll==id)
    {
        output();
    }
    else
        cout<<"sorry wrong input!";
}
int main()
{
    input();
    search();
}
