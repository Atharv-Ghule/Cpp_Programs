//PROGRAM FOR IMPLEMENTATION OF ABSTRACT CLASS  1904
#include<iostream>
using namespace std;
class base
{
    public:
    virtual void display()=0;
};
class derived
{
    public:
    void display()
    {
        cout<<"\nAtharv";
    }
};
class derive: public derived
{
    public:
    void display()
    {
        cout<<"\nGhule";
    }
};
int main()
{
    derived d;
    d.display();
    derive c;
    c.display();
    return 0;
}
