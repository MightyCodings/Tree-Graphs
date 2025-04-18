//quick sort method
#include<stdio.h> 
#include<conio.h> 
int split(int[ ],int,int); 
void quick(int[ ],int,int); 
void main( ) 
{ 
int   x[5], j; 
clrscr( );
printf("\nEnter 5 numbers:");
for(j=0;j<=4;j++) 
{ 
scanf("%d",&x[j]);
} 
quick(x,0,4); 
printf("\nSorted Elements= "); 
for(int i=0;i<=4;i++) 
{ 
printf("\t%d",x[i]); 
} 
getch( ); 
} 
void quick(int z[ ],int lw,int  up) 
{  int i; 
if(up>lw) 
{ 
i=split(z, lw, up); 
quick(z, lw, i-1); 
quick(z, i+1, up); 
} 
} 
int split(int z[ ], int lw, int up) 
{ 
int pivot, upper, lower, t; 
lower= lw; 
upper= up; 
pivot= z[lw]; 
while(upper>lower) 
{ 
while(z[lower]<=pivot) 
{ 
lower++; 
} 
while(z[upper]>pivot) 
{ 
upper--; 
} 
if(upper>lower) 
{ 
t = z[lower]; 
z[lower] = z[upper]; 
z[upper] = t; 
} 
} 
t = z[lw]; //here, z[lw] is 'pivot' which is swapped with z[upper] 
z[lw] = z[upper]; 
z[upper] = t; 
return(upper); 
}