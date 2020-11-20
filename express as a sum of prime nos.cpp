#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number which has to be checked for";
	cin>>n;
	int count =0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
			else
			{
			continue;
		}
		
	}
	if(count==2)
	{
		cout<<"The number cannot be expressed as a sum of two prime numbers";
	}
		else
		{
		cout<<"The number can be expressed as a sum of two prime numbers";
	}
}
