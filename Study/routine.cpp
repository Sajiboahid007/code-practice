#include<bits/stdc++.h>
using namespace std;
int main()
{
    string day;
    getline(cin,day);
    switch (day[0])
    {
    case 's':
        if(day=="saturday")
        {
            cout<<"Rest time";
        }
        else
        printf("Sunday Routine\n10:35-11:25\nCSE 1201 Room B316\n11:30-1:15\nCSE 1204L Room B316\n2:00-3:30\nCSE 1208 Room A332");
        break;
    case 'm':
        printf("Monday Routine\n9:40-10:30\nCSE 1206 Room B419\n10:35-11:25\nCSE 1201 Room B316\n11:30-12:20\nCSE 1205 B419\n12:25-1:15\nCSE 1203 Room B316");
        break;
    case 'w':
        cout<<"Wednesday Routine\n9:40-11:25\nCSE 1207 Room B316\n1:30-12:20\nCSE 1201 Room B316\n12:25-1:15\nCSE 1203 Room B316\n2:00-3:30\nCSE 1202L Room B318";
        break;
    case 't':
        if(day=="tuesday")
        cout<<"tuesday Routine\n10:35-11:25\nCSE 1206 Room B419\n11:30-12:20\nCSE 1203 Room B316\n12:25-1:15\nCSE 1205 B419\n2:00-3:30\nCSE 1202L Room B318";
        else if(day=="thursday")
        cout<<"thursday Routine\n9:40-10:30\nCSE 1208 Room A332\n10:35-11:25\nCSE 1206 Room B419\n11:30-1:15\nCSE 1204L B316";
        break;
    case 'f':
        cout<<"Rest day";
        break;
    default :
        cout<<"sorry error type Sunday Monday Tuesday Wednesday Thursday Friday Saturday";
    return 0;

    }
}
