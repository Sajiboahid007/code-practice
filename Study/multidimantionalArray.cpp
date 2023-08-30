#include<bits/stdc++.h>
using namespace std;
int main()
{
    int room [2][3] = {{2,3,4},{6,7,8}};
    //2,3,4
    //6,7,8
    cout<< room [1][2]<<endl;
    int bertha [2][3] = {{11,12,13},{14,15,16}};

    for(int row=0;row<2;row++)
    {
        for(int colum=0;colum<3;colum++)
        {
            cout<<bertha[row][colum]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
