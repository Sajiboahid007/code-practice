#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size = ";
    scanf("%d",&size);
    int array[size];
    for(int i=1;i<=size;i++)
    {
        cin>>array[i];
    }
    cout<<"Here is a input number are = \n";
    for(int i=1;i<=array[i];i++)
    {
        printf("%d\n",array[i]);
    }
    int choise;
    printf("pick up a searching number\n");
    cin>>choise;
    for(int i=0;i<array[i];i++)
    {
        if(array[i]==choise)
            printf("yes %d",array[i]);
        else if(array[i] !=choise)
            cout<<"sorry";
    }
}
