// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
string lowercase(string word)
{
    string storeword="";
    for(char ch:word)
    {
        if(ch >='A' && ch <='Z')
        {
            ch=(int)ch+32;
        }
        storeword+=(char)ch;
    }
    return storeword;
}

int main() {
    string day;
    std::cout<<"Enter your working day: ";
    std::cin>>day;
    if(lowercase(day)=="monday")
    {
        std::cout<<"2nd day of the week you are little bit busy are you?"<<endl;
    }
    else
    std::cout<<"sorry wrong input!"<<endl;

    return 0;
}
