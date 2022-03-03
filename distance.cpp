//Program for different distances and display its  sum, using two classes. 1904
#include<iostream>
using namespace std;

class dist2;
class dist1
{
    public:
        float mtr, cm;
    public:
        void accept()
        {
                cout<<"\n Enter Data in Meter & Centimeter  :  ";
                cin>>mtr>>cm;
        }
        friend void diff(dist1 d1, dist2 d2);
        friend void sum(dist1 d1, dist2 d2);
};
class dist2
{
        float feet, inch;
    public:
        void accept()
        {
                cout<<"\n Enter Data in Feet & Inch         :  ";
                cin>>feet>>inch;
        }
        friend void difference(dist1 d1, dist2 d2);
        friend void sum(dist1 d1, dist2 d2);
};
void difference(dist1 d1,dist2 d2)
{
        int n1, n2, n3, ans, m, c, f, in;
        n1=d2.inch*2.54;
        n2=d2.feet*0.30;
        n3=d1.mtr*100;
        ans=((d1.cm + n3) - (n1 + n2));
        m=ans/100;
        c=ans%100;
        cout<<"\n --------------------------------------------------------------------";
        cout<<"\n Difference in Meters & Centimeters  =  "<<m<<" mtrs & "<<c<<" cms";
        f=m/0.30;
        in=c/2.54;
        cout<<"\n Difference in Feets & Inches        =  "<<f<<" feets & "<<in<<" inches";
}
void sum(dist1 d1, dist2 d2)
{
        int n1, n2, n3, ans, m, c, f, in;
        n1=d2.inch*2.54;
        n2=d2.feet*0.30;
        n3=d1.mtr*100;
        ans=((d1.cm + n3) + (n1+n2));
        m=ans/100;
        c=ans%100;
        cout<<"\n ------------------------------------------------------------------";
        cout<<"\n Sum in Meters & Centimeters         =  "<<m<<" mtrs & "<<c<<" cms";
        f=m/0.30;
        in=c/2.54;
        cout<<"\n Sum in Feets & Inches               =  "<<f<<" feets & "<<in<<" inches";
}
int main()
{
        dist1 d1;
        dist2 d2;
        d1.accept();
        d2.accept();
        difference(d1,d2);
        sum(d1,d2);
        return 0;
}