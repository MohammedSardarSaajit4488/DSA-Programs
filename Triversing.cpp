#include<iostream>
using namespace std;
int main()
{
	int a[50],i,n;
	cout<<"Enter the array size: ";
	cin>>n;
	cout<<"Enter the elements: ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Triversing the element are: ";
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<endl;
	}
	return 0;
}
