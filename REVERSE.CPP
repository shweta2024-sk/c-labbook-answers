#include<iostream.h>
#include<conio.h>
void main()
{
int t,n,rev=0,rem,temp;
clrscr();
cout<<"enter a number:";
cin>>n;
t=n;
while(n>0)
{
rem=n%10;
rev=(rev*10)+rem;
n=n/10;
}
cout<<"reverse of "<<t<<"is"<<rev;
getch();
}