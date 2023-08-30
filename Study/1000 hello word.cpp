#include<iostream>
using namespace std;
class TestA
{
public:
    char name[20];
    int age;
    void Getdata()
    {
        cout<<"Enter your name : \n";
        cin>> name;
        cout<<"Enter your age : \n";
        cin>>age;
    }
    void Display()
    {
        cout<<"Your name = "<<name<<endl;
        cout<<"Your age = "<<age<<endl;
    }
};
class TestB:public TestA
{
private:
    int id;
    void getId()
    {
        cout<<"Enter your id : "<<endl;
        cin>>id;
    }
public:
    void print()
    {
        Getdata();
        getId();
        Display();
        cout<<"Your id is = "<<id<<endl;
    }
};

int main()
{
    TestB x;
    x.print();
}
