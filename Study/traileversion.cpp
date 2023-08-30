#include<bits/stdc++.h>
using namespace std;

class Datainfo
{
public:
    string name,address,dep;
    int id,number;
    void getdata()
    {
        getchar();
        cout<<"Enter name: ";
        getline(cin,name);
//        getchar();
        cout<<"Enter Address: ";
        getline(cin,address);
        cout<<"Enter Department: ";
        cin>>dep;
        cout<<"Enter ID: ";
        cin>>id;
        cout<<"Enter the number: ";
        cin>>number;
    }
    void DisplayData()
    {
        cout<<"        ---------------------------------------------------      "<<endl;
        cout<<"Your name :"<<name<<"\n"<<"Your Address :"<<address<<"\n"<<"Your Department :"<<dep<<"\n"<<"Your Id :"<<id<<"\n"<<"Your Number :"<<number<<endl;
    }

};
vector<Datainfo>store;

void DisplayData()
  {
   for(int i=0;i<store.size();i++)
    {
        Datainfo y;
        y=store[i];
        y.DisplayData();
    }
  }

void DeleteData(int id)
{
    for (int i=0;i<store.size();i++)\
    {
       if (store[i].id==id)
        store.erase(store.begin()+i);

    }

}



int main()
{
    int carry;
    cout<<"Enter the number of person :"<<endl;
    cin>>carry;

    for(int i=1;i<=carry;i++)
    {
        cout <<"Enter data for person "<< i <<":"<< endl;
        Datainfo x;
        x.getdata();
        store.push_back(x);
    }


    cout<<"\n\n"<<endl;
    int a;
    cout<<"Enter your searching value :"<<endl;
    cin>>a;
    for(int i=0;i<store.size();i++)
    {
        if(store[i].id==a)
        {
            {
                store[i].DisplayData();
            }
        }

    }
    cout<<"\n";
    getchar();
    int choice;
    cout<<"1 Deleted data"<<endl;
    cout<<"2 Exit program "<<endl;
    cin>>choice;
    if(choice==1)
    {
        int deletedId;
        cout<<"Enter the Id of data do you want do delete: "<<endl;
        cin>>deletedId;
        DeleteData(deletedId);
        cout<<"Displaying update data"<<endl;
        DisplayData();
    }
    else
    {
        cout<<"Exiting program";
    }
    return 0;
}
