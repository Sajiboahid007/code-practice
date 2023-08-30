#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int employeeNumber,workingHour;
    float perHourAmount,totalSalary;
    scanf("%d %d %f",&employeeNumber,&workingHour,&perHourAmount);
    totalSalary=workingHour*perHourAmount;
    printf ("NUMBER = %d\nSALARY = U$ %.2f\n",employeeNumber,totalSalary);
    return 0;

}
