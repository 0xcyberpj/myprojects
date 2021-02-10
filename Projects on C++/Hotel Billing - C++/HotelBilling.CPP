#include<iostream.h>
#include<conio.h>
#include<math.h>
int a,e;
int p1=0,p2=0,p3=0,p4=0,p5=0,i1=0,i2=0,i3=0,i4=0,i5=0;
int p11=0,p12=0,p13=0,p14=0,p15=0,i11=0,i12=0,i13=0,i14=0,i15=0;
float total1,total2;
void main()
{
t:
clrscr();
int b;
int choice();
int dkp();
cout<<"\n\n\n\n\n\n\n\t\t\t\t    WELCOME";
cout<<"\n\n\t\t\t\t  HOTEL DHABA";
cout<<"\n\n\t\t\tWe are delight to have you here,\n\t\t\tPlease enter 1 to view MENU CARD";
a=choice();
if(a==1)
{
clrscr();
cout<<"\n\n\n\n\n\n\n\t\t   Please enter your table number(1 to 4):";
cin>>b;
}
 if(b==1 || b==2 || b==3 || b==4)
 {
 j:
 clrscr();
 cout<<"\n\n\n\n\n\n\n";
 cout<<"\n\t\t\t+++++++++++++++++++++++++++++++";
 cout<<"\n\t\t\t+             MENU            +";
 cout<<"\n\t\t\t+++++++++++++++++++++++++++++++";
 cout<<"\n\t\t\t+N+        FOOD STYLE         +";
 cout<<"\n\t\t\t+++++++++++++++++++++++++++++++";
 cout<<"\n\t\t\t+1+ BIRIYANI                  +";
 cout<<"\n\t\t\t+2+ NORTH INDIAN              +";
 cout<<"\n\t\t\t+++++++++++++++++++++++++++++++";
 cout<<"\n\n\t\t\t  Enter '7' to get final bill";
 int b;
 b=choice();
 switch(b)
  {
  case 1:
  q:
  clrscr();
  cout<<"\n\n\n\n\n\n\n";
  cout<<"\n\t\t\t++++++++++++++++++++++++++++++++";
  cout<<"\n\t\t\t+             MENU             +";
  cout<<"\n\t\t\t++++++++++++++++++++++++++++++++";
  cout<<"\n\t\t\t+N+     BIRIYANI      +  RATE  +";
  cout<<"\n\t\t\t++++++++++++++++++++++++++++++++";
  cout<<"\n\t\t\t+1+EMPTY BIRIYANI     + Rs.100 +";
  cout<<"\n\t\t\t+2+VEG BIRIYANI       + Rs.120 +";
  cout<<"\n\t\t\t+3+EGG BIRIYANI       + Rs.140 +";
  cout<<"\n\t\t\t+4+CHICKEN BIRIYANI   + Rs.160 +";
  cout<<"\n\t\t\t+5+MUTTON BIRIYANI    + Rs.200 +";
  cout<<"\n\t\t\t++++++++++++++++++++++++++++++++";
  cout<<"\n\t\t\t    Press '9' for MAIN MENU";
  cout<<"\n\t\t\t     GET BILL (Enter '10')";
  int c;
  c=choice();
  switch(c)
   {
   case 1:
   p1=100;
   cout<<"\n\t\t\t         Quantity:";
   cin>>i1;
   dkp();
   cin>>e;
       switch(e)
    {
    case 8:
    goto q;
    break;
    case 10:
    goto r;
    break;
    }
   break;
   case 2:
   p2=120;
   cout<<"\n\t\t\t         Quantity:";
   cin>>i2;
   dkp();
   cin>>e;
    switch(e)
    {
    case 8:
    goto q;
    break;
    case 10:
    goto r;
    break;
    }
    break;
   case 3:
   p3=140;
   cout<<"\n\t\t\t         Quantity:";
   cin>>i3;
   dkp();
   cin>>e;
    switch(e)
    {
    case 8:
    goto q;
    break;
    case 10:
    goto r;
    break;
    }
   break;
   case 4:
   p4=160;
   cout<<"\n\t\t\t         Quantity:";
   cin>>i4;
   dkp();
   cin>>e;
    switch(e)
    {
    case 8:
    goto q;
    break;
    case 10:
    goto r;
    break;
    }
   break;
   case 5:
   p5=200;
   cout<<"\n\t\t\t         Quantity:";
   cin>>i5;
   dkp();
   cin>>e;
    switch(e)
    {
    case 8:
    goto q;
    break;
    case 10:
    goto r;
    break;
    }
   break;
   case 9:
   goto j;
   break;
   case 10:
   r:
   goto k;
   break;
   }
  case 2:
  w:
  clrscr();
  cout<<"\n\n\n\n\n\n\n";
  cout<<"\n\t\t\t++++++++++++++++++++++++++++++++";
  cout<<"\n\t\t\t+             MENU             +";
  cout<<"\n\t\t\t++++++++++++++++++++++++++++++++";
  cout<<"\n\t\t\t+N+   NORTH INDIAN    +  RATE  +";
  cout<<"\n\t\t\t++++++++++++++++++++++++++++++++";
  cout<<"\n\t\t\t+1+ROTI               + Rs.30  +";
  cout<<"\n\t\t\t+2+CHAPPTHI           + Rs.40  +";
  cout<<"\n\t\t\t+3+NAAN               + Rs.60  +";
  cout<<"\n\t\t\t+4+POROTTA            + Rs.30  +";
  cout<<"\n\t\t\t+5+VEG ROLL           + Rs.30  +";
  cout<<"\n\t\t\t++++++++++++++++++++++++++++++++";
  cout<<"\n\t\t\t    Press '9' for MAIN MENU";
  cout<<"\n\t\t\t     GET BILL (Enter '10')";
  int t;
  t=choice();
  switch(t)
   {
   case 1:
   p11=30;
   cout<<"\n\t\t\t         Quantity:";
   cin>>i11;
   dkp();
   cin>>e;
    switch(e)
    {
    case 8:
    goto w;
    break;
    case 10:
    goto u;
    break;
    }
   break;
   case 2:
   p12=40;
   cout<<"\n\t\t\t         Quantity:";
   cin>>i12;
   dkp();
   cin>>e;
    switch(e)
    {
    case 8:
    goto w;
    break;
    case 10:
    goto u;
    break;
    }
   break;
   case 3:
   p13=60;
   cout<<"\n\t\t\t         Quantity:";
   cin>>i13;
   dkp();
   cin>>e;
    switch(e)
    {
    case 8:
    goto w;
    break;
    case 10:
    goto u;
    break;
    }
   break;
   case 4:
   p14=30;
   cout<<"\n\t\t\t         Quantity:";
   cin>>i14;
   dkp();
   cin>>e;
    switch(e)
    {
    case 8:
    goto w;
    break;
    case 10:
    goto u;
    break;
    }
   break;
   case 5:
   p15=30;
   cout<<"\n\t\t\t         Quantity:";
   cin>>i15;
   dkp();
   cin>>e;
    switch(e)
    {
    case 8:
    goto w;
    break;
    case 10:
    goto u;
    break;
    }
   break;
   case 9:
   goto j;
   break;
   case 10:
   u:
   goto k;
   break;
   }
  case 7:
  k:
  clrscr();
  float total,gst,finalt;
  total1=p1*i1+p2*i2+p3*i3+p4*i4+p5*i5;
  total2=p11*i11+p12*i12+p13*i13+p14*i14+p15*i15;
  total=total1+total2;
  gst=total*6/100;
  finalt=total+gst;
  cout<<"\n\n\n\n\n\n";
  cout<<"\n\t\t\tYour Total:"<<total;
  cout<<"\n\t\t\tGST:"<<gst;
  cout<<"\n\t\t\tYour Grand Total:"<<finalt;
  break;
  }
 }
else
{
clrscr();
cout<<"\n\n\n\n\n\n\n\t\t\tYou have entered a wrong choice,\n\t\t\t   Do you want to try again?\n\t\t\tIf so please enter 1 to continue";
int x;
cin>>x;
if(x==1)
goto t;
}
getch();
}
int dkp()
{
cout<<"\n\t\t\t     Your Order is Placed";
cout<<"\n\t\t\t Press '8' to order another item";
cout<<"\n\t\t\t     and '10' to get bill";
return(0);
}
int choice()
{
cout<<"\n\n\n\t\t\t   Enter your choice ------>";
cin>>a;
return(a);
}































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































































