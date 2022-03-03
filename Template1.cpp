//program for function template  1904
#include<iostream>
using namespace std;
template <class A>
A sum(A x,A y)//function template
{
	return x+y;
}
int main()
{
	int a,b;
	float p,q;
	cout<<"enter two integer:";
	cin>>a>>b;
	cout<<"enter two float values:";
	cin>>p>>q;
	cout<<"\n sum of integers ="<<sum(a,b);
	cout<<"\n sum of float = "<<sum(p,q);
	return 0;
}
