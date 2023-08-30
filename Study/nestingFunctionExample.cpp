#include<iostream>
using namespace std;
class Studeninfo
{
private:
    int roll;
    char name[30];
    float marks;
    void GetData()
    {
    cout<<"Enter the Roll\nEnter the Name\nEnter the Marks"<<endl;
    cin>>roll>>name>>marks;
    }
public:
     Studeninfo()
    {
    GetData();
    cout<<"Roll is = "<<roll<<endl;
    cout<<"Name is = "<<name<<endl;
    cout<<"Marks is = "<<marks<<endl;
    }

};
int main()
{
    Studeninfo information;
//    information.display();
}
