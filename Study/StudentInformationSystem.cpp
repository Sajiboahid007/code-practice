#include<bits/stdc++.h>
using namespace std;

class Info
{
public:
    int roll;
    string name, department, contactInfo;
    Info()
    {
        cout<<"roll\n name\n department \n contract\n";
        cin >> roll >> name >> department >> contactInfo ;
    }
    void Display()
    {
        cout<<"Name :" << name << "\nDepartment : " << department << "\nContract info : " << contactInfo<<endl;
        cout << "***********************************************" << endl;
    }
};

vector<Info> storage;
void Search()
{
    int roll;
    cout<<"Enter searching roll: ";
    cin >> roll;
     for(int i = 0 ; i < storage.size(); i ++ )
    {
        Info info = storage[i];
        if(info.roll == roll)
        {
            cout << "Search Found\n";
            cout<<"Name :" << info.name << "\nDepartment : " << info.department << "\nContract info : " << info.contactInfo<<endl;
            cout << "Search End\n";
        }
    }
}

void Display()
{
     for(int i = 0 ; i < storage.size(); i ++ )
    {
        Info info = storage[i];
        cout<<"Name :" << info.name << "\nDepartment : " << info.department << "\nContract info : " << info.contactInfo<<endl;
        cout << "**********************************" << endl;
    }
}

int main()
{
    int numberOfStudent;
    cout<<"student number"<<endl;
    cin >> numberOfStudent;

    for(int i = 1 ; i <= numberOfStudent; i ++ )
    {
        Info info;
        storage.push_back(info);
    }
    Display();
    Search();
}
