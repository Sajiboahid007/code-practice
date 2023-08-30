#include<bits/stdc++.h>
using namespace std;

bool ParenthesisCheck(string parenthesis)
{
    stack<char> stackStorage;
    stackStorage.push('*');

    for(int i = 0 ; i < parenthesis.size(); i++)
    {
        if(parenthesis[i]=='('||parenthesis[i]=='[')
        {
           stackStorage.push(parenthesis[i]);
        }
        else
        {
            if(stackStorage.top()=='('&& parenthesis[i]==')')
            {
                stackStorage.pop();
            }
            else if(stackStorage.top()=='['&& parenthesis[i]==']')
            {
                stackStorage.pop();
            }
            else{
                stackStorage.push(parenthesis[i]);
            }
        }
    }
    return stackStorage.top() == '*' ? true : false;
}

int main()
{
    int positiveInteger;
    cin>>positiveInteger;
    while(positiveInteger--)
    {
        string parentheses;
        cin>>parentheses;

        if(ParenthesisCheck(parentheses))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }

}
