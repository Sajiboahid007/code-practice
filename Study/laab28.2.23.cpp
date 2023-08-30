#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"Enter the Row number: \n";
    cin>>row;
    for(int i=1;i <= row;i++)
    {
        for(int j=1;j <= i;j++)
        {
            cout<< j <<" ";
        }
        cout<<"\n";
    }    cout<<"Enter the Row number: \n";
        cin>>row;



       // row--;
    for(int i=row;i >= 1;i--)
    {
        for(int j=1;j <= i;j++)
        {
            cout<< j <<" ";
        }
        cout<<"\n";
    }




    cout<<"Enter another row number:\n";
    cin>>row;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<< k<<" ";
        }
        cout<<"\n";
    }




    cout<<"pyramid"<<endl;
    cin>>row;
    //row--;
    for(int i= row;i>=1;i--)
    {
        for(int j=1;j<=row-i;j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<< k<<" ";
        }
        cout<<endl;
    }
}

