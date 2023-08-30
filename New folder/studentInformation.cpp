#include<bits/stdc++.h>
using namespace std;
class StudentBasicInfo
{
public:
    string id,name,department;
    double GPA[9];
    double CalculateGPA(double GPA[])
    {
        double sum=0;
        for(int i=1;i<=8;i++)
        {
            sum+=GPA[i];
        }
        return sum/8;
    }
};
class Student:public StudentBasicInfo
{
    public:
    void SetBasicInfo()
    {
        printf("Enter Your name:\n");
        cin >> name;
        printf("Enter Your ID:\n");
        cin >> id;
        printf("Enter Your department:\n");
        cin >> department;
    }
    void SetGPA()
    {
        printf("Enter your 8th semester GPA\n");
        for(int i=1;i<=8;i++)
        {
            printf("%d semester's GPA=",i);
            scanf("%lf",&GPA[i]);
            printf("\n");
        }
    }
    void Display(double average)
    {
        cout << "Id: " << id << endl << "Name: "<< name << endl << "Department: " << department << endl;
        for(int i=1;i<=8;i++)
            printf("Semester %d = %.2lf\n",i,GPA[i]);
        printf("Average CGPA = %.2lf",average);
    }
};

int main()
{
    Student student;
    student.SetBasicInfo();
    student.SetGPA();


    double AverageGPA = student.CalculateGPA(student.GPA);
    student.Display(AverageGPA);

}
