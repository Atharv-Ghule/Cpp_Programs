//PROGRAM FOR PERSON  1904
#include<iostream>
using namespace std;
class Person
{
    protected:
    char name[10];
    public:
    void accept()
    {
        cout<<"Enter your Name:";
        cin>>name;
    }
};
class Student
{
    protected:
    int rollno=1904;
};
class Example:private Person,protected Student
{
    public:
    void display()
    {
        accept();
        cout<<"\n Your Name & Roll Number are:"<<name<<rollno;
    }
};
int main()
{
Example e;
//e.accept();
    return 0;
}