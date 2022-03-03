#include<iostream>
using namespace std;
class Percentage
{
    int x =0;
    public :
    void get()
    {
        cout<<"Enter your Percentage";
        cin>>x;
    }
    void show()
    {
        try{
            if (x < 0 || x>100)
            {
                throw x;
                cout<<"\n After throw statement that is never executed\n";
            }
            }
            catch (int x)
            {
                cout<< "Exception Caught,The percentage entered is NOT VALID !\n";
            }
            cout<<"Your Percentage is :"<<x;
    }
};
int main()
{
    Percentage p;
    p.get();
    p.show();
    return 0;
}
