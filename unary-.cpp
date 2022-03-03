#include<iostream>
#include<conio.h>
using namespace std;
class Negate
{
    int x,y;
    public:
    void read()
    {
        cout<<"Enter two numbers";
        cin>>x>>y;
    }
    void operator -()
    {
        x=-x;
        y=-y;
    }
    void display()
    {
        cout<<"x="<<x<<endl<<"y="<<y;
    }
};
int main()
{
    Negate n;
    n.read();
    -n;
    n.display();
    getch();
}