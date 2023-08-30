#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size\n";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    sort(array,array+size);
    cout<<"Your sorted array is : ";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}
