#include<iostream>
using namespace std;
class Student
{
private:
    int number;
public:
    Student(int x)
    {
        number=x;
        cout<<"constructor called"<<endl;
    }
    Student(Student &st)
    {
        number=st.number;
    }
    void Display()
    {
        cout<<"number : "<<number<<endl;
    }
    ~Student()
    {
        cout<<"destructor\n";
    }
};
int main()
{
    Student st(10);
    Student st2(st);
    st2.Display();
    return 0;
}
