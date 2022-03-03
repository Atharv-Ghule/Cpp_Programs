//PROGRAM FOR TRY , CATCH & THROW  1904
#include<iostream>
using namespace std;
void Evenodd(int n)
{
    try
    {
        if(n%2==0)
        throw 1;
    }
    catch(int)
    {
        cout<<"Number entered is divisible by 2";
    }
    catch(double)
    {
        cout<<"Number entered is NOT completely divisible by 2"; 
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