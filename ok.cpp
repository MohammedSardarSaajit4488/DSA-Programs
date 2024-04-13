#include<iostream>
using namespace std;
int main()
{
	int a[10],n,I,k, item=35;
	cout<<"enter the array size:";
	cin>>n;
	cout<<"enter the element:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the array element position:";
	cin>>k;
	for(i=n;i>k;i--)
	{
		a[i]=a[i-l];
	}
	a[k]=item;
	for(i=0;i<n+l;i++)
	{
		cout<<"Elements are:"<<a[i]<<endl;
	}
	return 0;
}
