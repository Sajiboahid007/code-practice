#include<bits/stdc++.h>
using namespace std;

class StudentInfo
{
private:
    string name,id;
    double cgpa;
public:
    void display()
    {
        cout<<"Name = "<<name<<"\nID = "<<id<<"\nCGPA = "<<cgpa<<endl;
    }
    void setValues(string _name,string _id,double _cgpa)
    {
        name=_name;
        id=_id;
        cgpa=_cgpa;
    }
};
int main()
{
    vector<StudentInfo> store;
    int testCase;
    cout << "Please enter the student number\n";
    cin >> testCase;
    for(int i=0;i<testCase;i++)
    {
        string name,id;
        double cgpa;
        cout<<"Enter your Name=\n";
        cin>>name;
        cout<<"Enter your ID=\n";
        cin>>id;
        cout<<"Enter your CGPA\n";
        cin>>cgpa;
        StudentInfo x;
        x.setValues(name,id,cgpa);
        store.push_back(x);
    }

    for(int i=0;i<store.size();i++)
    {
        StudentInfo information = store[i];
        information.display();
    }

}
