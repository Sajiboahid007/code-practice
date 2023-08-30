#include<bits/stdc++.h>
using namespace std;

class Information
{
private:
    string id;
    double cgpa;
    void PrintId()
    {
       cout << "Id = " <<id << "\n CGPA = " << cgpa<< endl;

    }

public:
    string name;
    void Display()
    {
       cout << "Name = "<< name << endl;
       //cout << "Id = " <<id << endl;
       PrintId();
    }
    Information (string _id,double _cgpa)
    {
        id = _id;
        cgpa = _cgpa;

    }
    void SetValues(string _id, double _cgpa)
    {
        id = _id;
        cgpa = _cgpa;
    }
};


class Student
{
private:
    string id, name;
    double cgpa;
public:
 void Display()
 {
     cout << "Id = " <<id << "\nName = " << name<<"\nCGPA = "<<cgpa <<endl;
 }
 void SetValues(string _id, string _name, float _cgpa )
 {
     id = _id;
     name = _name;
     cgpa =_cgpa;
 }

};

int main()
{
    //Information info("cse1013",3.56);
    //info.name = "sajib";
    //info.SetValues("cse0678", 3.56);
    //info.Display();
    //info.PrintId();


    vector<Student> storage;
    for(int i=0;i<2;i++)
    {
        string id,name;
        double cgpa;
        cin>>id>>name>>cgpa;
        Student x;
        x.SetValues(id,name,cgpa);
        storage.push_back(x);
    }
    int a = 10;
    for(int i = 0 ; i < storage.size(); i++)
    {
        Student student = storage[i];
        student.Display();
    }
}


