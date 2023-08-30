#include<bits/stdc++.h>
using namespace std;
class sajib
{
public:

    sajib()
    {
        printf("enter the name;\n");
        string word;
        getline (cin,word);
        //scanf("%s",&a);
        if(word=="sajib")
        {
            cout << "your have enter " << word<< endl;
        }
        else if(word=="shakil")
        {
            cout << "your have enter " << word<< endl;
        }
    }
    sajib(int b)
    {
        cout << "This is called int" << b  << endl;
    }
    sajib (double b)
    {
        cout << "This is called double" << b  << endl;
    }
    sajib (float b)
    {
        cout << "This is called float" << b  << endl;
    }
};
int main()
{
    float b = 56.67;
    sajib x(b);
    sajib y;
}
