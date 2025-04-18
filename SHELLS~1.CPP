//shell sorting(Diminishing Increment Sort)
void shell( )
{
int j, i, gap, temp, a[100],n;
printf("\n Enter how many element:");
scanf("%d",&n);
printf("\n Enter Elements:");
 
for(i=0;i<=n-1;i++) 
{ 
scanf("%d",&a[i]); 
} 
 
gap = n/2; 
while(gap!=0) 
{ 
for(j = gap;j< n;j++) 
{ 
for(i=j-gap;i>=0;i=i-gap) 
{ 
if(a[gap+i]<=a[i]) 
{ 
temp=   a[i]; 
a[i] = a[gap+i]; 
a[gap+i] = temp; 
} 
} 
} 
gap=gap/2; 
} 
printf("\n Sorted array:\n "); 
for(i=0;i<=n-1;i++) 
{ 
printf("\t%d",a[i]); 
} 
} 