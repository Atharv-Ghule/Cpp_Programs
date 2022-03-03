//PROGRAM FOR STATIC DEMO  1904
#include<iostream>
#include<conio.h>
class Count 
{
    private :
    static
    int counter;
    public :
    Count()
    {
      counter++;
    }
    static int display()
    {
        return counter;
    }
};
int Count::counter=0;
void main()
{
    Count c1;

    cout<<"\nNumber of Ojects :"<<c1.display();
    Count c2;
    Count c3;
    cout<<"\nNumber of Ojects :"<<c1.display();
    getch();
}  