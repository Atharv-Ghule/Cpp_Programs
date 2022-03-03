//Program sorting ascending to descending  and vice-versa 1904
#include<iostream>
using namespace std;
template <class x> void sort(x a[],int n)
{
	int i,j;
	x temp;
	for(i=0;i<=n-2;i++)
	{
	for(j=0;j<=n-2;j++)
	{
		if(a[i]>a[j+1])
		{
			temp=a[i];
			a[i]=a[j+1];
			a[j+1]=temp;
		}
		}	
	}
}
int main()
{
	int a[100],m,n,i;
	float b[100];
	cout<<"enter number of integers:";
	cin>>n;
	for(i=0;i<=n-1;i++)
	{
		cout<<"enter an integer:";
		cin>>a[i];
	}
	sort(a,n);
	cout<<"stored array:\n";
	for(i=0;i<=n-1;i++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	cout<<"enter number of float numbers:";
	cin>>m;
	for(i=0;i<=m-1;i++)
	{
		cout<<"enter a float number:";
		cin>>b[i];
	}
	sort(b,m);
	cout<<"stored array:\n";
	for(i=0;i<=m-1;i++)
	{
		cout<<b[i]<<"\t";
		
	}
	cout<<endl;
	return 0;
}
