#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double formulaSqrt=((b*b)-4*a*c);
    if(a == 0 || formulaSqrt < 0)
    {
        cout<<"Impossivel calcular"<<endl;

    }
    else
    {
        double R1=(-b+sqrt(formulaSqrt))/(2*a);
        double R2=(-b-sqrt(formulaSqrt))/(2*a);
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }
}
