//PROGRAM FOR CLASS PROTECTED  1904
#include<iostream>
using namespace std;
class A 
{
protected:
int x=12;
};
class B:protected A
{
    protected:
    int y=23;
};
class C: public B
{
private:
int z;
public:
void add ()
{
    z=x+y;
    cout<<"Addition ="<<z;
}
};
int main()
{
    C obj1;
    obj1.add();
    return 0;
}
