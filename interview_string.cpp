// Online C++ compiler to run C++ program online
#include<iostream>
#include<string>
#include<cstring>
#include<bitset>
using namespace std;

string occur(string str)
{
	string result=" ";
	int n=str.length();
	
	for(int i=0;i<n;i++)
	{
		int count=1;
		while(i<n-1 && str[i]==str[i+1])
		{
			++count;
			++i;
		}
		result += to_string(count) + str[i];
	}
	int i=0;
	int j=str.length()+1;
	//return result;
	// 3a2b1d1c
	string result1=result;
	while(i<j)
	{
	    char temp=result1[i];
	    result1[i]=result1[j];
	    result1[j]=temp;
	    
	    i++;
	    j--;
	}
	
	return result1;
}

int main()
{
	string str="aaabbdc";
	cout<<occur(str);
	return 0;
}
