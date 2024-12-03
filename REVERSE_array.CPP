#include<iostream.h>
#include<conio.h>
void main()
{
int i,a[10];
clrscr();
cout<<"enetr 5 ele =\n";
for(i=0;i<5;i++)
{
cin>>a[i];
}
cout<<"\n reverse array=\n";
for(i=4;i>=0;i--)
{
cout<<"\n"<<a[i];
}
getch();
}
