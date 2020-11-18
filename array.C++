#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"Enter elements into the array"<<endl;
	for(int i=0;i<5;i++)
	cin>>arr[i];
	int *p;
	p=arr;
	for(int i=0;i<5;i++)
	{
	cout<<"You entered"<<endl;
		cout<<*p<<endl;
		p++;
	}
	return 0;
}
