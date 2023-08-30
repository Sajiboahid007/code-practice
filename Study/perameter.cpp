#include<iostream>
using namespace std;
class Perameter
{
public:
    int width,height;
    Perameter(int a,int b=9)
   {
       width=a;
       height=b;
   }
   void calculate_area()
   {
       cout<<width*height;
   }

};
int main()
{
   Perameter x(3);
   x.calculate_area();
}
