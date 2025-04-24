#include<stdio.h>
#include<conio.h>
void linear_sorted();
void main()
{
clrscr();
linear_sorted();
getch();
}
void linear_sorted( )
{
int x[100], srch, i,j,k, f=0, n;
printf("\n How many element you want?");
scanf("%d",&n);
printf("Enter these numbers");
for(i=0;i<=n-1;i++)
{
scanf("%d",&x[i]);
}
printf("\nEnter search element ");
scanf("%d",srch);
// bubble sort logic
for( i=0; i <= n-1; i++ ) // total number of elements
{
for( j=0 ; j<= n-2 ; j++ ) // total passes
{
if( x[j] > x[j+1] )
{
k = x[j];
x[j] = x[j+1];
x[j+1] = k;
}
}
}
printf("Sorted array= ");
for( i = 0; i <= n-1; i++ )
{
printf("\t%d",x[i]);
}
for(i=0;i<=n-1;i++) // logic for linear search
{
if( srch == x[i] )
{
f = 1;
break;
}
}
if( f == 1)
{
printf("\n Element is found at position= ",i);
}
else
{
printf("\n Element is not found ");
}
}