#include<stdio.h>
int prime(int num);
int main()
{
	int num;
	printf("Enter a number to be checked",num);
	scanf("%d",&num);
}
int prime(int num)
{
	int i,c;
	for(i=0;i<=num;i++)
	{
		if(num%i==0)
		c++;
	}
	if(c==2)
	{
		printf("The number %d is prime",num);                                              
	}
		else
		printf("The number %d is not prime",num);
	}


