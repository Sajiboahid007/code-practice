#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Array elements "<<i+1<<": ";
        cin>>array[i];
    }
    int maximumValue = array[0];
    int minimumValue = array[0];
    int secondHighest=array[0];

    for(int i = 0 ; i < size; i ++)
    {
        maximumValue = max(maximumValue, array[i]);
        minimumValue = min(minimumValue, array[i]);
    }
    cout<<"maximum value: "<<maximumValue<<endl;
    cout<<"minimum value: "<<minimumValue<<endl;
    for(int i=0;i<size;i++)
    {
        if(maximumValue>array[i]&&array[i]>secondHighest)
        {
            secondHighest =array[i];
        }
    }
    cout<<"Second highest: "<<secondHighest<<endl;
}
