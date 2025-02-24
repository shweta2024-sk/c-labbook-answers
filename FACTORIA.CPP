#include<iostream.h>
#include<conio.h>
void main()
{
int n,fact=1,i;
clrscr();
cout<<"enter a number:";
cin>>n;
if(n<0)
{
cout<<"factorial of negative number doesnt exit"<<n;
}
else
{
for(i=1;i<=n;i++)
{
fact *=i;
}
cout<<"factorial of "<<n<<"="<<fact;
}
getch();
}