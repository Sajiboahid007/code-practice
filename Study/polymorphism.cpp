#include<bits/stdc++.h>
using namespace std;

class Ememy
{
protected:
    int attackpower;
public:
    void setattackpower(int a)
    {
        attackpower=a;
    }
};

class Ninja : public Ememy
{
public:
    void attack()
    {
       cout<<"I am a ninja, ninja chop! -"<<attackpower<<endl;
    }
};
class Monster : public Ememy
{
public:
    void attack()
    {
       cout<<"monster monster must eat you! -"<<attackpower<<endl;
    }
};
int main()
{
    Ninja n;
    Monster m;
    Ememy *enemy1=&n;
    Ememy *enemy2=&m;
    enemy1 ->setattackpower(30);
    enemy2 ->setattackpower(58);
    n.attack();
    m.attack();
}









