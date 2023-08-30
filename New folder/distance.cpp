#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double x1,x2,y1,y2,distance;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    distance=sqrt(((x2-x1)*(x2-x1))+((y1-y2)*(y1-y2)));
    printf("%.4lf\n",distance);
    //double result= ((x2-x1)*(x2-x1))+((y1-y2)*(y1-y2));
    //printf("%.4lf", result);
    return 0;
}
