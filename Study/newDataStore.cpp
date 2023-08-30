#include<bits/stdc++.h>
using namespace std;
class DataStore
{
public:
    string name,address;
    long int number,nid;
    void getdata()
    {
        getchar();
        cout<<"Enter the name: "<<endl;
        getline(cin,name);
        cout<<"Enter the Address: "<<endl;
        getline(cin,address);
        cout<<"Enter the Number: "<<endl;
        cin>>number;
        cout<<"Enter the NID number: "<<endl;
        cin>>nid;
    }
    void displayData()
    {
        cout<<"-----------------****----------------"<<endl;
        cout<<name<<endl;
        cout<<address<<endl;
        cout<<number<<endl;
        cout<<nid<<endl;
    }
};

vector<DataStore>infoStore;

int main()
{
    int n;
    cout<<"Enter the number of persons: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout << "Enter data for person " << i << ":" << endl;
        DataStore d;
        d.getdata();
        infoStore.push_back(d);
    }
    for(int i=0;i<infoStore.size();i++)
    {
        DataStore x;
        x=infoStore[i];
        x.displayData();
    }
    //searching part
    int id;
    cout<<"Enter your searching elements: "<<endl;
    cin>>id;
    for(int i=0;i<infoStore.size();i++)
    {
        if(infoStore[i].nid==id)
        {
            infoStore[i].displayData();
        }
    }
}
