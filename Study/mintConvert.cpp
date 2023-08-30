#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int munites;
    cout<<"Enter your Second: ";
    scanf("%d",&munites);

    printf("Hours=%d\n",munites/60);
    munites%=60;
    printf("Minutes=%d\n",munites/60);
    munites%=60;
    printf("Second=%d",munites);

    return 0;
}
