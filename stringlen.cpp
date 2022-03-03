//PROGRAM FOR STRING LENGTH , CONCENTATION  1904
#include <iostream> 
#include<string.h> 
using namespace std; 
class sci
{ 
char x[20]="science"; 
int len; 
public: 
void get() 
{ 
cout<<"before try"<<endl; 
len=strlen(x); 
cout<<"length of string is : "<<len<<endl; 
try 
{ 
cout<<"inside try "<<endl; 
if(len>5) 
{
throw x; 
cout<<"after throw (never executed)"<<endl; } 
} 
catch(char x) 
{ 
cout<<"exception caught"<<endl; 
cout<<"length of string is : "<<len<<endl; 
cout<<"inside catch"<<endl; 
} 
} 
}; 
int main() 
{ 
sci a; 
a.get(); 
}