#include<iostream>
#include<string>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number :\n";
    cin>>number;
    int sum=0;
    string result="";
    for(int i=5;i<=number;i+=5)
    {
        sum+=i;
        result+=to_string(i)+"+";
    }

    cout<<result.substr(5,result.size()-1);
    cout<<"\nTotal summation is : = "<<sum<<endl;
}
