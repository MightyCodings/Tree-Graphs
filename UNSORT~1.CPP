#include<stdio.h>
#include<conio.h>
void linear_unsorted();
void main()
{
clrscr();
linear_unsorted();
getch();
}
void linear_unsorted( )
{
 int x[100], srch, i, f=0, n;
printf("\n How many element you want?");
scanf("%d",&n);
printf("Enter these numbers");
 for(i=0;i<=n-1;i++)
 {
scanf("%d",&x[i]);
 }
printf("\nEnter search element ");
scanf("%d",&srch);
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
printf("\n Element is found at position= ", i);
}
else
{
printf("\n Element is not found ");
}
}
