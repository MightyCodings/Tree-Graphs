//selection sort method
#include<stdio.h>
#include<conio.h>
void selection();
void main()
{
clrscr();
selection();
getch();
}
void   selection( ) 
{ 
int i,j,k,pos,min,x[50],n; 
printf("\n How many number you want to sort?"); 
scanf("%d",&n); 
printf("\n Enter these elements : "); 
 
for( i = 0; i <= n-1; i++ ) 
{ 
scanf("%d",&x[i]); 
} 
 
for(i=0;i<=n-1;i++) 
{ 
min=x[i]; 
for(j=i;j<=n-1;j++) 
{ 
if(min>x[j]) 
{ 
min=x[j]; 
pos=j; 
} 
} 
if(x[i]!=min) 
{ 
k=x[i]; 
x[i]=x[pos]; 
x[pos]=k; 
} 
} 
printf("\n Sorted data=> "); 
for(i=0;i<=n-1;i++) 
{ 
printf("\t%d",x[i]); 
} 
} 