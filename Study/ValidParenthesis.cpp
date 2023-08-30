#include<bits/stdc++.h>
using namespace std;

bool Solution(string s)
{
    stack<char> storage;
    storage.push('*');
    for(int i = 0 ; i < s.size(); i++)
    {
        if(s[i] == ')' || s[i] == '}' || s[i] == ']')
        {
            char currentTop = storage.top();
            if(currentTop == '*') continue;
            if(currentTop == '(' && s[i] == ')') storage.pop();
            if(currentTop == '{' && s[i] == '}') storage.pop();
            if(currentTop == '[' && s[i] == ']') storage.pop();
        }
        else
            storage.push(s[i]);
    }
}

int main()
{
    string s;
    cin >> s;
    cout << Solution(s) << endl;
    return 0;
}
