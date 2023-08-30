#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of array\n";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    sort(array, array + size);
//    for(int i=0;i<size-1;i++)
//    {
//        for(int j=0;j<size-1-i;j++)
//        {
//            if(array[j]>array[j+1])
//            {
//                int temp=array[j];
//                array[j]=array[j+1];
//                array[j+1]=temp;
//            }
//        }
//    }
    cout<<"Sorted Array is : ";
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
}
