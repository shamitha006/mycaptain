#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	FILE *fp,*ft;
	char another,choice;
	struct student
	{
		char first_name[50],last_name[50];
		char course[100];
		int section;
	};
	struct student e;
	char xfirst_name[50],xlast_name[50];
	long int recsize;
	fp=fopen("users.txt","rb+");
	if(fp==NULL)
	{
		fp=fopen("users.txt","wb+");
		if(fp==NULL)
		{
			puts("Cannot open file");
			return 0;
		}
	}
	recsize= sizeof(e);
	while(1)
	{
		system("cls");
		cout<<"\t\t======STUDENT DATABASE MANAGEMENT SYSTEM======";
		cout<<"\n\n     ";
		cout<<"\n\n";
		cout<<"\n\t\t\t1.Add Records";
		cout<<"\n\t\t\t2.List Records";
		cout<<"\n\t\t\t3.Modify Records";
		cout<<"\n\t\t\t4.Delete Records";
		cout<<"\n\t\t\t5.Exit Program";
		cout<<"\n\n";
		cout<<"\t\t\tEnter your choice";
		fflush(stdin);
		choice=getche();
		switch(choice)
		{
			case 1:
				fseek(fp,0,SEEK_END);
				another='Y';
				while(another=='Y'||another=='y')
				{
					system("cls");
					cout<<"Enter the first name";
					cin>>e.first_name;
					cout<<"Enter the last name";
					cin>>e.last_name;
					cout<<"Enter the course";
					cin>>e.course;
					cout<<"Enter the section";
					cin>>e.section;
					fwrite(&e,recsize,l,fp);
					cout<<"\nAdd another record(Y/N)";
					fflush(stdin);
					another=getchar();
				}
				break;
				case 2:
					system("cls");
					rewind(fp);
					cout<<"===View the records in the database===";
					cout<<"\n";
					while(fread(&e,recsize,l,fp)==1)
					{
						cout<<"\n";
						cout<<"\n"<<e.first_name<<setw(10)<<e.last_name(10);
						cout<<"\n";
						cout<<"\n"<<e.course<<setw(8)<<e.section;
					}
					cout<<"\n\n";
					system("Pause");
					break;
					case 3:
						system("cls");
						another="Y";
						while(another=="Y"||another="y")
						{
							cout<<"\nEnter the last name of the student";
							cin>>x.last_name;
							rewind(fp);
							while(fread(&e,recsize,l,fp)==1)
							{
								if(strcmp(e.last_name,x.last_name)==0)
								{
								cout<<"Enter new the first name";
					cin>>e.first_name;
					cout<<"Enter new the last name";
					cin>>e.last_name;
					cout<<"Enter new the course";
					cin>>e.course;
					cout<<"Enter new the section";
					cin>>e.section;	
					fseek(fp,recsize,SEEK_CUR);
					fwrite(&e,recsize,l,fp);
					break;
								}
								else
								cout<<"Record not found";
							}
							cout<<"\nModify another record(Y/N)";
							fflush(stdin);
							another=getchar();
						}
						break;
						case 4:
							system("cls");
							another='Y';
							while(another=='Y'||another=='y')
							{
								cout<<"\nEnter the last name of the student to delete";
								cin>>xlast_name;
								ft=fopen("temp.dat","wb");
								rewind(fp);
								while(fread(&e,recsize,l,fp)==1)
								if(strcmp(e.last_name,xlast_name)!=0)
								{
									fwrite(&e,recsize,l,ft);
								}
								fclose(fp);
								fclose(ft);
								remove("users.txt");
								rename("temp_dat","users.txt");
								fp=fopen("users.txt","rb+");
								cout<<"\nDelete another record(Y/N)";
								fflush(stdin);
								another=getchar();
								
							}
							break;
							case 5:
								fclose(fp);
								cout<<"\n\n";
								cout<<"\t\tTHANKYOU\t\t";
								cout<<"\n\n";
								exit(0);
		}
	}
	system("Pause");
	return 0;
}
