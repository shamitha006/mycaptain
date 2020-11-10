#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][3][3];
	int sum=0;
	int i,j,k;
	printf("Enter all the elements into the array");
	{
		for(i=0;i<2;i++)
		{
		    for(j=0;j<3;j++)
		    {
		        for(k=0;k<3;k++)
		        {
		          scanf("%d",&a[i][j][k]);
		      }
		   }
	}
}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d",a[i][j][k]);
			}
		}
	}
	if(j==k)
	{
		sum=sum+a[i][j][k];
	}
}


