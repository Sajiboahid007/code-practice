#include<bits/stdc++.h>
using namespace std;
int main ()
{
    while(true)
    {
        int n;
        scanf("%d",&n);
        if(n==0) break;
        int player1=0,player2=0;
        for(int i=0;i<n;i++)
        {
            int a,b;
            scanf("%d %d",&a,&b);
            if(a<b)
                player2++;
            else if(a>b)
                player1++;
        }
        printf("%d %d\n",player1,player2);
    }
    return 0;
}
