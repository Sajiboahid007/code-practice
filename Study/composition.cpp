#include<bits/stdc++.h>
using namespace std;

class Birthday
{
private:
    int month,day,year;
public:
    Birthday(int m,int d,int y)
    {
        month=m;
        day=d;
        year=y;
    }
    void printDate()
    {
        cout << month <<"/"<<day<<"/"<<year<<endl;
    }
};
class People:public Birthday
{
private:
    string name;
    Birthday dateofbirth(3, 20, 1990);
public:
    People(string name)
     {
         name=name;
         //cin>>name;
     }
    void printInfo()
    {
        cout<<name<<" was born on ";
        printDate();

    }
};



int main()
{
    //Birthday birthobj();
    People peopleobj("sajib");
    peopleobj.printInfo();
}
