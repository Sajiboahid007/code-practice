#include<bits/stdc++.h>
using namespace std;
int main()
{
    string write="HI there one two";
    string read;
    ofstream Write("test.txt");
    Write<<write;
    //read operation
//    string read;
//    ifstream Read("test.txt");
//    getline(Read,read);
//    cout<<read;




    string output2;
    ifstream out("test.txt");
    getline(out,output2);
    cout<<output2;
}
