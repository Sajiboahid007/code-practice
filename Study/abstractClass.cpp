#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    virtual void printinfo()=0;
};
class Studentinfo : public Student
{
private:
    string name,department;
    int roll;
public:
    void getinfo(string na,string dep,int rol)
    {
        name=na;
        department=dep;
        roll=rol;
    }
   void printinfo()
    {
        cout<<"Name = "<<name<<"\nDepartment = "<<department<<"\nRoll = "<<roll;
    }

};
int main()
{
   Studentinfo st;
   st.getinfo("Sajib","Cse",1310);
   st.printinfo();
}
