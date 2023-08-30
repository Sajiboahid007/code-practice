#include<iostream>
using namespace std;
//multilevel inheritance
class A
{
public:
    class_A()
    {
        cout<<"I am from class A\n";
    }
};
class B:public A
{
public:
    class_B()
    {
        cout<<"I am from class B\n";
    }
};
class C:public B
{
public:
    class_C()
    {
        cout<<"I am from class C\n";
    }
};
int main()
{
    C x;
    x.class_B();
    x.class_A();
    x.class_C();
}
