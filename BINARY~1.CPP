#include<stdio.h>
#include<conio.h>
void binary();
void main()
{
clrscr();
binary();
getch();
}
void binary( )
{
int mid,x[100],k, srch, i,j, f=0, down, up, n;
printf("\n How many element you want?");
scanf("%d",&n);
printf("\nEnter these numbers");
for(i=0;i<=n-1;i++)
{
scanf("%d",&x[i]);
}
scanf("\nEnter search element ");
scanf("%d",&srch);
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
printf("Sorted array=");
for( i = 0; i <= n-1; i++ )
{
scanf("\t%d",x[i]);
}
down = 0;
up = n-1;
while( down <= up) //logic for binary search
{
mid = (down+up)/2;
if(x[mid] == srch)
{
f = 1;
break;
}
else if( srch > x[mid])
{
down = mid + 1;
}
else if( srch < x[mid])
{
up = mid - 1;
}
}
if( f == 1)
{
printf("\n Element is found at position=%d",mid);
}
else
{
printf("\n Element is not found");
}
}
