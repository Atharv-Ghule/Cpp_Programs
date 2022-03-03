#include<iostream>
using namespace std;
class A
{
    private :
    int x;
    protected :
    int y;
    public :
    void show()
    {
        x=123;
        cout<<"Value of x="<<x;
    }
};
class B :public A
{
    public :
    void display()
    {
        cout<<"\nValue of y:"<<y;
    }
};
int main ()
{
    B b;
    b.show();
    b.display();
    return 0;
}