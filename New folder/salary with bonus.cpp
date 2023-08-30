#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    double a,b;
    scanf("%lf %lf",&a,&b);
    double c=a + (b * 15)/100;
    printf("TOTAL = R$ %.2lf\n", c);
    return 0;
}
