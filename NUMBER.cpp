//1904 ATHARV S. GHULE FY-IT
#include <iostream>
using namespace std;
class number 
{
private:
int n;
public:
void read(int x)
{
   n=x;
}
void display(void)
  {
      cout<<"value of n is:"<<n;
  }
  void operator++(void) 
  { 
    n=+n;  
  }
};

int main() 
{
 number n;
 n.read(5);
 ++n;
 n.display();
 return 0;
}