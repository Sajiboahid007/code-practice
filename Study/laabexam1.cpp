#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={12,2,1,4,23};
//    int arr[100], number, largest, i;
//    cout<<"Enter the Size: ";
//    cin>>number;
//    for(i=0; i<number; i++)
//    {
//        cout<<"Enter "<<i<<" Array Elements: ";
//        cin>>arr[i];
//    }
    int largest = arr[0];
//    int secondHighest = ar[0];

    for(int i=0; i<5; i++)
    {
        if(largest>arr[i])
        {
           largest = arr[i];
        }
    }
    cout<<"\nlargestest Number = "<<largest;
    cout<<endl;
    return 0;
}


