//insertion at kth position:
#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int d;
	cin>>a;
	cout<<"enter the elements into the array";
	int c[a];
	int i;
	for(i=0;i<=a;i++)
	{
		cin>>c[i];
	}
	cout<<"array before insertion\n";
	for(i=0;i<=a;i++)
	{
		cout<<c[i]<<"\t";
	}
	cout<<"\nenter the element into the array";
	cin>>b;
	cin>>d;
	for(i=0;i<=a;i++)
	{
		c[d]=b;
		cout<<c[i]<<"\t";
	}
}
