
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int result=((a+b)+abs(a-b))/2;
    printf("%d",result);

    if(c>result)
        printf("%d\n",c);
    else
        printf("%d\n",result);
    //printf("%d eh o maior\n",result);
    //int result=(a+b)+abs(a-b))/2;


    return 0;
}
