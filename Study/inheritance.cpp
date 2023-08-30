#include<iostream>
using namespace std;
class testa
{
public:
    void classa(){
    cout<<"i am from class a";}
};
class testb
{
public:
    void classb(){
    cout<<"i am from class b";}
};
class testc:public testa,public testb
{
public:
    void classc(){
        classa();
        classb();
    cout<<"i am from class c";}
};
int main()
{
    testc x;
    x.classc();
}
