#include<iostream>
using namespace std;
class shape
{
    virtual void area()=0;
};
class square :public shape
{
    void area()
    {
    }
    class circle :public shape
    {
    void area()
        {
        }
    };
};