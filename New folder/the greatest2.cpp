#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c,result;
    scanf("%d %d %d",&a,&b,&c);
    result=((a+b)+abs(a-b))/2;
    int result2=(result+c+abs(result-c))/2;
    printf("%d eh o maior\n",result2);
    return 0;
}
