//Program for exception  handling for strings  1904
#include<iostream>
using namespace std;
void Evenodd(int n)
{
    try
    {
        if(n%2==0)
        throw 1;
        else
        throw 1.0;
        
    }catch(...)//catch all exceptions
    {
        cout<<"EXCEPTION ENCOUNTERED !!";
    }
}
int main()
{
    int a;
    cout<<"Enter a Number";
    cin>>a;
    Evenodd(a);
    return 0;
}