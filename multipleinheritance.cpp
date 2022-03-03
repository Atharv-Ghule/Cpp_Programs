//PROGRAM FOR MULTIPLE INHERITANCE  1904
#include<iostream>
using namespace std;

class person
{
protected:
  char name[15];
  protected:

  void accept()
  {
    cout<<"Enter your name:";
    cin>>name;
  }
};

class student
{
  protected:
 int rollno=1904;
};

class Example:protected person,protected student
{
    public:
    void display()
    {
      accept();
     cout<<"\nYour name and rollno are:"<<name<<"\n"<<rollno;      
    }
};

int main()
{
Example e;
e.display();
return 0;
}
