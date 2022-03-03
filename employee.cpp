//Program for employee using classes & objects  1904
#include<iostream>
using namespace std;
class employee
{
    private:
    int id,salary;
    char name[20];

    public:
    void getinfo()
    {
        cout<<"Enter your name,id & salary:";
        cin>> name>> id >>salary;
    }
    void display()
    {
        cout<<"Your Name is:"<<name<<endl
            <<"Your salary:"<<salary<<endl;
        cout <<"Your id = "<<id;

    }
};
int main ()
{
    employee e;
    e.getinfo();
    e.display();
return 0;
}

