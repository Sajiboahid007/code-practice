#include<bits/stdc++.h>
using namespace std;
int main()
{
    double Cachorro=4.00,X_Salada=4.50,X_Bacon=5.00,Torrada_simples=2.00,Refrigerante=1.50;
    double x,y;
    cin>>x>>y;
    if(x==1)
    {
        printf("Total: R$ %.2lf\n",y*Cachorro);
    }
    else if(x==2)
    {
    	printf("Total: R$ %.2lf\n",y*X_Salada);
    }
    else if(x==3)
    {
    	printf("Total: R$ %.2lf\n",y*X_Bacon);
    }
    else if(x==4)
    {
    	printf("Total: R$ %.2lf\n",y*Torrada_simples);
    }
    else if(x==5)
    {
    	printf("Total: R$ %.2lf\n",y*Refrigerante);
    }
}
