#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter no of rows";
	cin>>n;
	
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=n;j>=i;j--)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	int n1=n-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			cout<<" ";
		}
		for(int j=i;j<=n;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}
