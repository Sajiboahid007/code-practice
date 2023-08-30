#include <iostream>
using namespace std;

class EmployeeBase{
public:
    virtual void PrintInfo() = 0;
};

class Employee: public EmployeeBase
{
private:
    string name, id;
    int salary;
public:
    Employee()
    {

    }
    Employee(string empName, string empId, int empSalary)
    {
        name = empName;
        id = empId;
        salary = empSalary;
    }
    Employee(string empName, string empId)
    {
        name = empName;
        id = empId;
    }
    void PrintInfo()
    {
        cout << "name = " << name << "\nId = " << id << "\nSalary = "<< salary << endl;
    }
};


int main() {
    Employee emp("shakil", "csse5456", 4000);
    emp.PrintInfo();
    return 0;
}


