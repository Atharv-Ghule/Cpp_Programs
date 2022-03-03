//PROGRAM FOR VIRTUAL FUNCTION  1904
#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()
    {
        cout<<"\nhello";
    }
};
class derived:public base
{
    public:
    void display()
    {
        cout<<"\nATHARV";
    }
};
int main()
{
    base*b,a;
    derived d;
    b=&d;
    b->display();
    a.display();
    return 0;
}
