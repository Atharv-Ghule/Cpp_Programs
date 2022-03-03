//Program for finding area of circle  1904
#include <iostream>
using namespace std;

 int main()
  {
   float radius, area_circle;

   cout << "Enter the radius of circle: ";
   cin >> radius;

   area_circle = 3.14 * radius * radius;
   cout << "Area of circle: " << area_circle << endl;

   return 0;
}
