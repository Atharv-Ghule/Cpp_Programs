//Program for StudentDetails using classes & object  1904
#include<iostream>
using namespace std;
class student
{
    private: 
    char name[20];
    int rollno;
    float Perc;

    private:
    void getdata()
    {
      cout<<"Enter your Name, Roll no, Percentage";
      cin>> name>> rollno >>Perc; 
    } 
    public:
    void showdata()
    {
        getdata();
        cout<<"Your Name is:"<<name;
        cout<<endl<<"Your Rollno is:"<<rollno;
        cout<<endl<<"Your Percentage is:"<<Perc;
    }
};
int main()
{
    student s;
    s.showdata();
    return 0;
}
