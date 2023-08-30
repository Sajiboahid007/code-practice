#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num1,num2;
    cout<<"Enter 1st Number : \n";
    cin>>num1;
    cout<<"Enter 2nd Number : \n";
    cin>>num2;
    cout<<"Average number is = "<<setprecision(2)<<(num1+num2)/2;
}
