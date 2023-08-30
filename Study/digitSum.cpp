#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int number;
    int sum=0;
    cin>>number;
    vector<int>storage;
    while(number!=0)
    {
      int divident=number%10;
      storage.push_back(divident);
      number=number/10;
      sum+=divident;
//    cout<<divident<<"\n";
    cout<<number<<"\n";
    }
    cout<<"\n";
    for(int i=storage.size()-1;i>0;i--)
    {
        cout<<storage[i]<<"+";
    }
    cout<<storage[0]<<endl;

     cout<<"Total Summation is: = "<<sum;


}
