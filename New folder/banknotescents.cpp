#include<bits/stdc++.h>
using namespace std;
int main()
{
    double taka;
    scanf("%lf",&taka);
    printf("NOTAS:\n");
    int hundredTakaNote = taka/100.00;
    printf("%d nota(s) de R$ 100.00\n",hundredTakaNote);
    taka=fmod(taka,100.00);
    int fittytaka=taka/50.00;
    printf("%d nota(s) de R$ 50.00\n",fittytaka);
    taka=fmod(taka,50.00);
    int twentytaka=taka/20.00;
    printf("%d nota(s) de R$ 20.00\n",twentytaka);
    taka=fmod(taka,20.00);
    int tentaka=taka/10.00;
    printf("%d nota(s) de R$ 10.00\n",tentaka);
    taka=fmod(taka,10.00);
    int fivetaka=taka/5.00;
    printf("%d nota(s) de R$ 5.00\n",fivetaka);
    taka=fmod(taka,5.00);
    int twotaka=taka/2.00;
    printf("%d nota(s) de R$ 2.00\nMOEDAS:\n",twotaka);
    taka=fmod(taka,2.00);
    int onecent=taka/1.00;
    printf("%d moeda(s) de R$ 1.00\n",onecent);
    taka=fmod(taka,1.00);
    int fittycent=taka/0.50;
    printf("%d moeda(s) de R$ 0.50\n",fittycent);
    taka=fmod(taka,0.50);
    int twentyfivecent=taka/0.25;
    printf("%d moeda(s) de R$ 0.25\n",twentyfivecent);
    taka=fmod(taka,0.25);
    int tencent=taka/0.10;
    printf("%d moeda(s) de R$ 0.10\n",tencent);
    taka=fmod(taka,0.10);
    int fivecent=taka/0.05;
    printf("%d moeda(s) de R$ 0.05\n",fivecent);
    taka=fmod(taka,0.05);
    int onecent1=taka/0.01;
    printf("%d moeda(s) de R$ 0.01\n",onecent1);
    return 0;
}
