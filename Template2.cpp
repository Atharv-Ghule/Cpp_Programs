//PROGRAM FOR TEMPLATE CLASS LIBRARY  1904
#include <iostream>
using namespace std;
template<class A>
class calculate
{ A x,y;
  public:
  void get()
  {
      cin>>x>>y;
  }
 A add()
 { return x+y ;
 }
A sub()
{ return x-y ;
}
A multi()
{return x*y;
}
void show()
{
    cout<<"\n addition is :"<<add();
    cout<<"\n subtraction is "<<sub();
    cout<<"\n multi is : "<< multi();
}
 };
int main()
{
    calculate<int> C;
    calculate<float> F;
    cout<<"\n enter 2 integers : ";
    C.get();
    cout<<"\n enter 2 decimal numbers :  ";
    F.get();
    cout<<"\n The answers of integer numbers are:  ";
    C.show();
    cout<<"\n The answers of decimal numbers are :  ";
    F.show();
    return 0;
}
