#include<stdio.h>
#include<conio.h>
void insert();
void main()
{
clrscr();
insert();
getch();
}
void insert()
{
int i,j,t,x[100],k,n;
printf("\n How many number you want to sort?");
scanf("%d",&n);
printf("\n Enter these elements :");
for( i = 0; i <= n-1; i++ )
{
scanf("%d",&x[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<i;j++)
{
if(x[i]<x[j])
{
t=x[j];
x[j]=x[i];
for(k=i; k>j ; k--)
{
x[k]=x[k-1];
}
x[k+1]=t;
}
}
}
printf("\n Sorted array: ");
for(i=0;i<n;i++)
{
printf("\t%d",x[i]);
}
}