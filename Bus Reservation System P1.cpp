#include<conio.h>
#include<cstdio>
#include<iostream>
#include<string.h>
#include<cstdlib>
using namespace std;
static int p=0;
class a
{
	char bus[5],driver[10],arrival[5],depart[5],from[10],to[10],seat[8][4][10];
	public:
		void install();
		void allotment();
		void empty();
		void show();
		void avail();
		void position(int i);
}
bus[10];
void vline(char ch)
{
	for(int i=80;i>0;i--)
	cout<<ch;
}
void a::install()
{
	cout<<"Enter bus number::";
	cin>>bus[p].busn;
	cout<<"\nEnter driver's name::";
	cin>>bus[p].driver;
	cout<<"\nArrival time::";
	cin>>bus[p].arrival;
	cout<<"\nDeparture time:";
	cin>>bus[p].depart;
	cout<<"\nFrom:\t\t\t";
	cin>>bus[p].from;
	cout<<"\nTo:\t\t\t";
	cin>>bus[p].to;
	bus[p].empty();
	p++;
}
void a::allotment()
{
	int seat;
	char number[5];
	top:
		cout<<"Bus no::";
		cin>>number;
		int n;
		for(n=0;n<=p;n++)
		{
			if(strcmp(bus[n].busn,number)==0)
			break;
		}
		while(n<=p)
		{
			cout<<"\nSeat number::";
			cin>>seat;
			if(seat>32)
			{
				cout<<"\nThere are only 32 seats in this bus";
			}
			else
			{
				if(strcmp(bus[n].seat[seat/4][seat%4-1],"Empty"))==0
				{
					cout<<"Enter passenger's name:";
					cin>>bus[n].seat[seat/4][(seat%4)-1];
					break;
				}
				else
				cout<<"The seat no. is already registered\n";
			}
		}
		if(n>p)
		{
			cout<<"Enter correct busno::\n";
			goto top;
		}
		void a::empty()
		{
			for(int i=0;i<8;i++)
			{
				for(int j=0;j<4;j++)
				{
					strcpy(bus[p].seat[i][j],"Empty");
				}
			}
		}
		void a::show()
		{
			int n;
			char number[5];
			cout<<"Enter the bus number";
			cin>>number;
			for(n=0;n<=p;n++)
			{
				if(strcmp(bus[n].busn,number)==0)
				break;
			}
			while(n<=p)
			{
				vline('*');
				cout<<"Busno::\t"<<bus[n].busn<<"\nDriver::\t"<<bus[n].driver<<"\t\tArrival Time::\t"<<bus[n].arrival<<"\tDeparture Time::\t"<<bus[n].depart<<"\nFrom::\t\t"<<bus[n].from<<"\t\tTo::\t\t"<<bus[n].tp<<"\n";
				vline('*');
				bus[0].position(n);
				int a=1;
				for(int i=0;i<8;i++)
			{
				for(int j=0;j<4;j++)
				{
					a++;
					if(strcmp(bus[n].seat[i][j],"Empty")!=0)
					cout<<"\nThe seat no"<<(a-1)<<"is reversed for"<<bus[n];
				
			}
		}
		break;
		
}
if(n>p)
cout<<"Enter the correct bus no:";
}
void a::position(int l)
{
	int s=0,p=0;
	for(int i=0;i<8;i++)
	{
		cout<<"\n";
		for(int j=0;j<4;j++)
		{
			s++;
			if(strcmp(bus[l].seat[i][j],"Empty")==0)
			{
				cout.width(5);
				cout.fill(' ');
				cout<<s<<".";
				cout.width(10);
				cout.fill(' ');
				cout<<bus[l].seat[i][j];
				p++;
			}
			else
			{
				cout.width(5);
				cout.fill(' ');
				cout<<s<<".";
				cout.width(10);
				cout.fill(' ');
				cout<<bus[l].seat[i][j];
				
			}
		}
	}
	cout<<"\n\nThere are"<<p<<"seats empty in the bus no::"<<bus[l].busn;
}
vois a::avail()
{
	for(int n=0;n<p;n++)
	{
		vline('*');
		cout<<"Bus no::\t"<<bus[n].busn<<"\nDriver::\t"<<bus[n].driver<<"\t\tArrival Time"<<bus[n].arrival<<"\t\tDeparture Time"<<bus[n].depart<<"\nFrom"<<bus[n].from<<"\nTo"<<bus[n].to<<"\n\n";
		vline('*');
		vline(' ');
		
	}
}
int main()
{
	system("cls");
	int w;
	while(1)
	{
		cout<<"\n\n\n\n";
		cout<<"\t\t\t1.Install\n\t\t\t"<<"\t\t\t2.Registration\n\t\t\t"<<"\t\t\t3.Show\n\t\t\t"<<"\t\t\t4.Buses Available\n\t\t\t"<<"\t\t\t5.Exit\n\t\t\t";
		cout<<"Enter your choice\n";
		cin>>w;
		switch(w)
		{
			case1:bus[p].install();
			break;
			case2:bus[p].allotment();
			break;
			case3:bus[p].show();
			break;
			case4:bus[p].avail();
			break;
			case5:exit(0);
			break;
			default:cout<<"Invalid Choice";
			
			
		}
	}
	return 0;
}

