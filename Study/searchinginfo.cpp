#include<bits/stdc++.h>
using namespace std;
class Information
{
public:
    string name,address;
    int age,contract;
    void Getdata()
    {
        cout<<"Enter name:"<<endl;
        getchar();
        getline(cin, name);
        cout<<"Enter address:"<<endl;
        getline(cin,address);
        cout<<"Enter age:"<<endl;
        cin>>age;
        cout<<"Enter contract:"<<endl;
        cin>>contract;
    }
     void DisplayData()
     {
         cout<<"--------------***-------------"<<endl;
         cout<<"Name : "<<name<<"\n"<<"Address : "<<address<<"\n"<<"Age : "<<age<<"\n"<<"Contract Number : "<<contract<<endl;
     }
};

vector<Information>store;

int main()
{
    int number;
    cout<<"How many information do you want to input ? "<<endl;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        Information info;
        info.Getdata();
        store.push_back(info);
    }
    for(int i=0;i<store.size();i++)
    {
        Information info;
        info=store[i];
        info.DisplayData();
    }
    //searching area
    cout<<"\n\n\n\n";

    string value;
    cout<<"Input what you looking for "<<endl;
    cin>>value;
    for(int i=0;i<store.size();i++)
    {
        if(store[i].name==value|| store[i].address == value )
        {
            store[i].DisplayData();
        }
    }

}
