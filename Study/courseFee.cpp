#include<bits/stdc++.h>
using namespace std;
class Student
{
private:
    char name[50];
    int semesterNumber;
    vector<int>courseFee;
public:
    Student(int size)
    {
        cout<<"parameterized";
        cout<<"Enter name \n";
        cin>>name;
        semesterNumber=size;

    }
    Student()
    {
        cout<<"Enter name \n";
        cin>>name;
        cout<<"Enter Semester Number \n";
        cin>>semesterNumber;
    }
    void Input ()
    {
        cout<<"Course Fee input \n";
        for(int i=0;i<semesterNumber;i++)
        {
            int x;
            cin>>x;
            courseFee.push_back(x);
        }
    }
    void Display()
    {
        cout<<"\n\nDisplay \n";
        cout<<"Your name = "<<name<<endl;
        for(int i=0;i<courseFee.size();i++)
        {
            cout<<courseFee[i]<<" ";
        }
    }
    void Reverse ()
    {
        cout<<"\n\nReversed \n";
        cout<<"Your Name = "<<name<<endl;
        cout<<"Course Fee = ";
        for(int i=semesterNumber-1;i>=0;i--)
        {
            cout<<courseFee[i]<<" ";
        }
    }
    void Summation()
    {
        int sum=0;

        for(int i=0;i<courseFee.size();i++)
        {
            sum+=courseFee[i];
        }
        cout<<"\nCourse fee summation = "<<sum<<endl;
    }
    void FindingMaxMini()
    {
        int maximum=courseFee[0];
        int minimum=courseFee[0];
        for(int i=1;i<courseFee.size();i++)
        {
            if(maximum<courseFee[i])
            {
                maximum=courseFee[i];
            }

            if(minimum>courseFee[i])
            {
                minimum=courseFee[i];
            }

        }
        cout<<"Maximum course Fee : "<<maximum<<endl;
        cout<<"Minimum course fee : "<<minimum<<endl;
    }
//    void FindingMini()
//    {
//        int minimum=courseFee[0];
//        for(int i=1;i<courseFee.size();i++)
//        {
//            if(minimum>courseFee[i])
//            {
//                minimum=courseFee[i];
//            }
//        }
//        cout<<"Minimum course fee : "<<minimum<<endl;
//    }
};
int main()
{
    Student x;
    x.Input();
    x.Display();
    x.Reverse();
    x.Summation();
    x.FindingMaxMini();
    //x.FindingMini();
}
