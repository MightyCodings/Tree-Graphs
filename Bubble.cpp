//2)Bubble sort method
#include<stdio.h>
#include<conio.h>
void bubble();
void main()
{
clrscr();
bubble();
getch();
}
void bubble( ) 
{ 
int x[100],n,i,j,k; 
printf("\n How many number you want to sort?"); 
scanf("%d",&n); 
printf("\n Enter these elements : "); 
 
for( i = 0; i <= n-1; i++ ) 
{ 
scanf("%d",&x[i]); 
} 
 
for( i=0; i <= n-1; i++ ) // total number of elements 
{ 
for( j= 0 ; j<= n-2 ; j++ ) // total passes 
{ 
if( x[j] > x[j+1] ) 
{ 
k = x[j]; 
x[j] = x[j+1]; 
x[j+1] = k; 
} 
} 
} 
printf("\nSorted array="); 
for( i = 0; i <= n-1; i++ ) 
{ 
printf("\t%d",x[i]); 
} 
}