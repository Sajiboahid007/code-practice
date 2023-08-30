#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d:",N/3600);
    N%=3600;
    printf("%d:",N/60);
    printf("%d",N%60);
    return 0;
}
