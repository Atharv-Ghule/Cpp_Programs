//PROGRAM FOR hierarchical inheritance. 1904
#include <iostream> 
using namespace std;

class A 
{
    public:
    int x, y;
 	void getdata()
 	{
   	    cout<<"\nEnter value of x and y:"; 
   	    cin>>x>> y;
 	}
};
class B : public A 
{
    public:
 	void Add()
 	{
 	    cout << "\nAddition:"<<x+y;
 	}
};
class C : public A
{
    public:
 	void sub()
 	{
        cout << "\nSubtraction: "<<x-y;
 	}
};
int main()
{
    B obj1;          
    C obj2;          
    obj1.getdata();
    obj1.Add();
    obj2.getdata();
    obj2.sub();
    return 0;
}
