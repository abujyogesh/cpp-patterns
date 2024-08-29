#include<iostream>
using namespace std;

int main()
{
	int n;
	char ch='a';
	cout<<"enter number of rows";
	cin>>n;
	
	for(int i=n;i>0;i--)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<ch++<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
