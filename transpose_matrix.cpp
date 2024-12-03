#include<iostream.h>
#include<conio.h>
void main()
{
int r,c a[10][10],i,j,trans[10][10];
clrscr();
cout<<"enetr row and col=";
cin>>r>>c;
cou<<"\nenetr ele for matrix=\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cin>>a[i][j];
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
trans[j][i]=a[i][j];
}
}
cout<<"transpose\n";
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
cout<<trans[i][j];
}
}
getch();
}
