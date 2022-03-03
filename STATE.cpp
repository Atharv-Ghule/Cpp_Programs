//1904 ATHARV S. GHULE FY-IT
#include <iostream>
#include<fstream>
using namespace std;
int main ()
{
    char info[20];
    ofstream
    fwrite("ABC.txt",ios::cout);
    fwrite <<"Atharv";
    fwrite <<"Ghule";
    fwrite .close();
    ifstream fread("ABC.txt");
    while(fread)
    {
        fread.getline(info , 20);
        cout<<info<<endl;
    }
    return 0;
}