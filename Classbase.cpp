//PROGRAM FOR SINGLE INHERTANCE  1904 
#include<iostream>
using namespace std;
class base
{
    int x;
    public :
    void getdata()
    {
        cout<<"Enter the value of x=";
        cin>>x;
    }
};
class derive : public base
{
private :
int y;
public :
void readdata()
{
    cout<<"Enter the value of y=";
    cin>>y;
}
void product()
{
    cout<<"Product:<<x";y;
}
};
int main()
{
    derive a;
    a.getdata();
    a.readdata();
    a.product();
    return 0;
}