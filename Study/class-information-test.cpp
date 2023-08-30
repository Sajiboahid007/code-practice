#include<bits/stdc++.h>
using namespace std;


class StudentInfo
{
public:
    int roll;
    string name,department,contract;
    void GetInfo()
    {
        cout<<"roll\n";
        cin>>roll;
        cout<<"name\n";
        cin>>name;
        cout<<"department\n";
        cin>>department;
        cout<<"contract \n";
        cin>>contract;
    }
    void Display()
    {
        cout<<"---------------------***------------------\n";
        cout<<"Name :" << name << "\nDepartment : " << department << "\nContract info : " << contract<<endl;
    }
};

vector<StudentInfo>storage;

//StudentInfo array[5];




int main()
{
    for(int i=1;i<=2;i++)
    {
        StudentInfo student;
        student.GetInfo();
        storage.push_back(student);
    }
    for(int i=0;i<storage.size();i++)
    {
        StudentInfo student;
        student=storage[i];
        student.Display();
    }
}


