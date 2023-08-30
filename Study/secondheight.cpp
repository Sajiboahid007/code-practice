#include<bits/stdc++.h>
using namespace std;

int getSecondHighest(int size, int *ar, int largestNumber)
{
    int secondHighest = ar[0];
    for(int i = 0 ; i < size; i++)
    {
        if(ar[i] < largestNumber){
            secondHighest = ar[i];
        }
    }
    return secondHighest;
}


int main()
{
    int arr[100], number, largest, i;
    cout<<"Enter the Size: ";
    cin>>number;
    for(i=0; i<number; i++)
    {
        cout<<"Enter "<<i<<" Array Elements: ";
        cin>>arr[i];
    }
    largest = arr[0];
    int secondHighest = arr[0];

    for(i=0; i<number; i++)
    {
        if(largest<arr[i])
        {
           largest = arr[i];
        }

        if(arr[i] <= largest && arr[i] > secondHighest){
            secondHighest = arr[i];
        }
    }

    cout << "Second Highest number = " << secondHighest << endl;
    cout<<"largestest Number = "<<largest;
    cout<<endl;
    return 0;
}



