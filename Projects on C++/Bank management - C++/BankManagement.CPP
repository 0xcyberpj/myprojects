#include<iostream.h>
#include<dos.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
int id1;
class acc
{
	public:
	int pin,cash,tcash;
	float id;
	char name[20];
	void getdata()
	{
		cout<<"Enter your name:";
		cin.get(name,20);
		cout<<"Enter id:";
		cin>>id;
		cout<<"Enter pin:";
		cin>>pin;
		cout<<"\n";
	}
	void putdata()
	{
		cout<<"Name:"<<name;
	}
	void cashh()
	{
		cout<<"enter cash:";
		cin>>cash;
	}
}ob;
void main()
{
	textbackground(BLACK);
	textcolor(GREEN);
	void deposit1();
	clrscr();
	cout<<"\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\tWelcome, You";
	cout<<"\n\t\t\t\t1)Create Account";
	cout<<"\n\t\t\t\t2)Login";
	cout<<"\n\t\t\t\t3)Admin Login";
	cout<<"\n\t\t\t\t4)Exit";
	char a;
	int s=0;
	a=getche();
	if(a=='1')
	{
	 clrscr();
	 fstream fout("detail.dat", ios::app);
	 fstream fout1("detail1.dat", ios::app);
	 ob.getdata();
	 fout.write((char*)&ob, sizeof(ob));
	 fout1<<ob.name<<"\t"<<ob.id<<"\t"<<ob.pin<<"\n";
	}
	else if(a=='2')
	{
		clrscr();
		cout<<"enter your id:";
		cin>>id1;
		ifstream fil("detail.dat", ios::in);
		fil.seekg(0);
		while(!fil.eof())
		{
			fil.read((char*)&ob,sizeof(ob));
			if (ob.id==id1)
			{
				ob.putdata();
				int pin1;
				cout<<"Enter your pin:";
				cin>>pin1;
				if(ob.pin==pin1)
				{
					deposit1();
					getch();
				}
			}
		}

	}
	else if(a=='3')
	{
		clrscr();
		cout<<"\n\n\tWelcome Administrator";
		int p;
		cout<<"\n\n\t\tEnter Password:";
		//p=getch(); putch('*');
		cin>>p;
		if(p==1234)
		{
			clrscr();
			cout<<"\n\n\tYou have Succesfully Logged In";
			cout<<"\n\n\t\t1)View All Accounts";
			int b;
			cin>>b;
			if(b==1)
			{
				ifstream fil2("detail.dat", ios::in);
				fil2.seekg(0);
				while(!fil2.eof())
				{
					fil2.read((char*)&ob,sizeof(ob));
					cout<<ob.name;
					cout<<"\n";
				}
				cout<<"All accounts displayed";
				getch();
			}
		}
	}
	else if(a=='4')
	{
		clrscr();
		cout<<"EXITING";
		delay(50); cout<<".";
		delay(100); cout<<".";
		delay(150); cout<<".";
		getch();
	}
	else
	{
		cout<<"\n\n\t\tNo option selected, process ending";
		getch();
	}
getch();
}
void deposit1()
{
	cout<<"you have successfully logged into your account";
	int p;
	cout<<"press 1 to continue";
	cin>>p;
	if (p==1)
	{
		clrscr();
		cout<<"1)Deposit cash";
		cout<<"\n2)View balance";
		cout<<"3)View accounts";
		int k;
		cin>>k;
		if(k==1)
		{
			fstream fout2("cash.dat",ios::out | ios::app);
			int id3; 
			id3==id1;
			cout<<"\nenter the amount to deposit:";
			cin>>ob.cash;
			ob.tcash+=ob.cash;
			fout2.write((char*)&ob,sizeof(ob));
			cout<<"Your money is successfully deposited";
		}
		else if(k==2)
		{
			ifstream fil1("cash.dat", ios::in);			
			int id2;
			id2==id1;
			fil1.seekg(0);
			while(!fil1.eof())
			{
				fil1.read((char*)&ob,sizeof(ob));
				if(ob.id==id2)
				{
					cout<<ob.tcash;
					getch();
				}
				getch();
			}
			fil1.close();
		}
	}
}
				

	

