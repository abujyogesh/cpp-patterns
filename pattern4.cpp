#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter number of rows";
	cin>>n;
	
	for(int i=n;i>0;i--)
	{
		for(int j=n;j>=i;j--)
		{
			cout<<j<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
