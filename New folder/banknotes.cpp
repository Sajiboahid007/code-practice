#include<bits/stdc++.h>
using namespace std;
int main()
{
    int taka;
    scanf("%d",&taka);
    printf("%d\n",taka);

        printf("%d nota(s) de R$ 100,00\n",taka/100);
    taka%=100;

        printf("%d nota(s) de R$ 50,00\n",taka/50);
    taka%=50;

        printf("%d nota(s) de R$ 20,00\n",taka/20);
    taka%=20;

        printf("%d nota(s) de R$ 10,00\n",taka/10);
    taka%=10;

        printf("%d nota(s) de R$ 5,00\n",taka/5);
    taka%=5;

        printf("%d nota(s) de R$ 2,00\n",taka/2);
    taka%=2;

        printf("%d nota(s) de R$ 1,00\n",taka/1);
    return 0;



}
