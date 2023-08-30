#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Temp
{
public:
    float fahrenheit;
    void Fahrenheit()
    {
        cout<<"Enter the temperature in Fahrenheit \n";
        cin>>fahrenheit;
    }
    void display()
    {
        cout<<"Fahrenheit is = "<<setprecision(4)<<5*(fahrenheit-32)/9<<" Celsius";
    }
};

int main()
{
    Temp x;
    x.Fahrenheit();
    x.display();
}

