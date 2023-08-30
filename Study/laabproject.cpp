#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the Array size :"<<endl;
    cin>>size;
    int array[size];
    cout<<"size of size = "<<sizeof(size)<<endl;
    cout<<"size of Array = "<<sizeof(array)<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"enter array index"<<i<<" "<<endl;
        cin>>array[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
    int position,value;
    cout<<"Enter the position where you want to change value :"<<endl;
    cin>>position;
    cout<<"Enter the new value :"<<endl;
    cin>>value;
    for(int i=size-1;i>=position-1;i--)
    {
        array[i+1]=array[i];
        array[i]=value;
    }
    cout<<"After the insertion final result is :"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<endl;
    }
}
