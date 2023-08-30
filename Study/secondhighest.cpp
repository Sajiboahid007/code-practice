#include<bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfSet[30]={12,43,12,54,64,64,24};
    int maximumValue=numberOfSet[0];
    int secondHighest=numberOfSet[0];
    for(int i=0;i<7;i++)
    {
        if(maximumValue < numberOfSet[i])
            {
                secondHighest=maximumValue;
                maximumValue=numberOfSet[i];
            }
        else if(secondHighest < numberOfSet[i] && maximumValue != numberOfSet[i])
            {
                secondHighest=numberOfSet[i];
            }
    }
    cout<<"Maximum Value :"<<maximumValue<<endl;
    cout<<"Second highest value :"<<secondHighest<<endl;
}
