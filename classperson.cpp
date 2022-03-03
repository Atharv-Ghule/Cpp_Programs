
#include <iostream>
using namespace std;
class Person
{
    protected:
    char name[20];
};
class Student:public Person
{
    private:
    int rollno;
    public:
    void accept()
    {
        cout<<"\nEnter your name & roll number :";
        cin>>name>>rollno;
    }
    void show()
    {
        cout<<"\nYour Details are: "<<name<<"\t"<<rollno;
    }
};
class Employee:public Person
{
    private :
    int salary;
    public:
    void get()
    {
        cout<<"\nEnter your name & roll number :";
        cin>>name>>salary;
    }
    void display()
    {
        cout<<"\n Your name & salary are:"<<name<<"\t"<<salary;
    }
};
int main()
{
    Student s;
    Employee e;
    s.accept();
    s.show();
    e.get();
    e.display();
    return 0;
}