#include<bits/stdc++.h>
using namespace std;

struct History{
    string date;
    string transferredAccount;
    int balance;
};


class Account
{
public:
    string name;
    int accountNumber,balance;
    vector<History> history;
};

class AccountInfo: public Account
{
public:
    void InitialValueSet(string _name, int accNumber)
    {
        name = _name;
        accountNumber = accNumber;
        balance = 0;
    }
    void setinfo()
    {
        cout<<"enter the name: "<<endl;
        cin>>name;
        cout<<"enter the account number: "<<endl;
        cin>>accountNumber;
        balance=0;
    }
    void printinfo()
    {
        cout<<"---------------------------------------------------------------"<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"account number: "<<accountNumber<<endl;
        cout<<"balance: "<<balance<<endl;
    }
};

vector<AccountInfo>storage;

class Operations{
public:
    void searching()
    {
        int accountNumber;
        cout<<"enter the account number: "<<endl;
        cin>>accountNumber;
        for(int i=0;i<storage.size();i++)
        {
            if(storage[i].accountNumber == accountNumber){
                storage[i].printinfo();
            }
        }
    }
    void ValueSet()
    {
        for(int i = 0; i < 50; i++)
        {
            AccountInfo accInfo;
            accInfo.InitialValueSet("Test " + to_string(i), rand());
            storage.push_back(accInfo);
        }
    }

    void Print()
    {
        int b =10;
        int a = b;
        for(int i = 0; i < storage.size(); i++)
        {
            storage[i].printinfo();
        }
    }
};





int main()
{
   Operations op;
   op.ValueSet();
   op.Print();
   op.searching();
}
