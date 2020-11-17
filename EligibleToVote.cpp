#include<iostream>
using namespace std;
int main()
{
int age;
cout<<"Dear citizen, Please enter your age"<<endl;
cin>>age;
if(age>18)
{
	cout<<"You are eligible to vote. Use this opportunity responsibly. "<<endl;
}
	else if(age==18)
	{
		cout<<"You are eligible to vote only if you have recieved a voter id. If not, do get it done soon as it is a right and duty for you to cast your vote"<<endl;
	}
		else
		{
			cout<<"Sorry,You aren't eligible to vote"<<endl;
		}
	return 0;
}
	


