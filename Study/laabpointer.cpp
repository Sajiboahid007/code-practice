#include<bits/stdc++.h>
using namespace std;

class Birthday
{
private:
    int month, day, year;

public:
    Birthday(int m, int d, int y)
    {
        month = m;
        day = d;
        year = y;
    }

    void printDate()
    {
        cout << month << "/" << day << "/" << year << endl;
    }
};

class People: public Birthday
{
private:
    string name;

public:
    People(const string& n, int m, int d, int y)
        : Birthday(m, d, y), name(n)
    {
    }

    void printInfo()
    {
        cout << name << " was born on ";
        printDate();
    }
};

int main()
{
    Birthday birthobj(17, 6, 2003);
    People peopleobj("sajib", birthobj);
    peopleobj.printInfo();

    return 0;
}
