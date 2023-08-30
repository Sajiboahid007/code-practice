#include<bits/stdc++.h>
using namespace std;
class People
{
public:
    string name,address,eamil;
     long int number;
     long int id;
    void infoget()
    {
        getchar();
        cout<<"Name : ";
        getline(cin,name);
        cout<<"Address : ";
        getline(cin,address);
        cout<<"Email : ";
        getline(cin,eamil);
        cout<<"NID number : ";
        cin>>id;
        cout<<"Contract number : ";
        cin>>number;
    }
    void infodis()
    {
        cout<<"-------------****--------------"<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Email : "<<eamil<<endl;
        cout<<"NID number  : "<<id<<endl;
        cout<<"Contract number : "<<number<<endl;
    }

};

vector<People>saveinfo;

int main()
{
    int number;
    cout<<"how many information do you want to add :"<<endl;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        cout << "Enter data for person " << i << ":" << endl;
        People x;
        x.infoget();
        saveinfo.push_back(x);
    }
    for(int i=0;i<saveinfo.size();i++)
    {
        People x;
        x=saveinfo[i];
        x.infodis();
    }
}







