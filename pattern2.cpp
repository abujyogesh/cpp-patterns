#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"enter limit";
	cin>>n;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(j%2==0)
			{
				cout<<"1"<<" ";
			}
			else
			{
				cout<<"0"<<" ";
			}
		}
		cout<<"\n";
	}
}
