#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int product1Code,product2Code;
    int product1Unit,product2Unit;
    float product1Price,product2Price;

    scanf("%d %d %f",&product1Code,&product1Unit,&product1Price);
    scanf("%d %d %f",&product2Code,&product2Unit,&product2Price);
    float product1TotalPrice=product1Unit*product1Price;
    float product2TotalPrice=product2Unit*product2Price;
    printf("VALOR A PAGAR: R$ %.2f\n",product1TotalPrice+product2TotalPrice);
    //printf("VALOR A PAGAR: R$ %.2f\n",(product1Unit*product1Price)+(product2Unit*product2Price));
    return 0;
}
