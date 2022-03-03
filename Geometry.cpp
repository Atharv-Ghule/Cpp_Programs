//PROGRAM FOR CLASS GEOMETRY  1904
#include<iostream>
using namespace std;
class geometry
{
    public:
        int area(int x)
        {
            return(x*x);
        }
        int area(int x,int y)
        {
            return(x*y);
        }
        int volume(int x)
        {
            return(x*x*x);
        }
        int volume(int x, int y, int z)
        {
            return(x*y*z);
        }
};
int main()
{
    geometry g;
    cout<<"Area of Square is "<<g.area(20)<<endl;
    cout<<"Area of rectangle is "<<g.area(30,12)<<endl;
    cout<<"Area of cube is "<<g.volume(5)<<endl;
    cout<<"Area of cuboid is "<<g.volume(5,7,9);
    return 0;
}