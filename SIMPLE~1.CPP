//1)simple exchange sorting method
#include<stdio.h>
#include<conio.h>
void simple();
void main()
{
clrscr();
simple();
getch();
}
void simple()
{
int x[100],n,i,j,k;
printf("How many number you want to sort?:- \t");
scanf("%d",&n);
printf("\n Enter these elements : ");

for( i = 0; i <= n-1; i++ )
{
scanf("%d",&x[i]);
}

for( i=0; i <= n-1; i++ ) // total number of elements
{
for( j= i+1 ; j<= n-1; j++ ) // total passes
{
if( x[i] > x[j] )
{
k = x[i];
x[i] = x[j];
x[j] = k;
}
}
}
printf("\nSorted array=");
for( i = 0; i <= n-1; i++ )
{
printf("\t%d",x[i]);
}
}
