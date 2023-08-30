#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Size;
    cout<<"Enter the size of array=\n";
    cin>>Size;
    int arr[Size];
    for(int i=1;i<=Size;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=Size;i++)
    {
        cout<<arr[i]<<" \n";
    }
    int choise;
    cout<<"\nPick up a number:\n";
    cin>>choise;
    for(int i=1;i<=Size;i++)
    {
        if(choise==arr[i])
        {
//         return arr[i];
            cout<<"\nyes number is here number is = "<<arr[i];
        }
//        else
//            cout<<"\n wrong input";
    }
}
