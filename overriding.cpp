//PROGRAM FOR OVERRIDING  1904
#include <iostream>
using namespace std;

class Base 
{
   public:
   void print() 
   {
    cout<<"Atharv";
    }
};

class Derived:public Base 
{
   public:
   void print() 
   {
    cout<<"Ghule";
    }
};

int main() 
{
    Derived derived1;
    derived1.print();
    return 0;
}
