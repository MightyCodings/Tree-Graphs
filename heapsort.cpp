#include<stdio.h>
#include<conio.h>
void heapsort(int[], int);
void buildheap(int [], int);
void satisfyheap(int [], int, int);
void main()
{
clrscr();
int a[10], i, size;
printf("Enter size of list");
scanf("%d",&size);
printf("Enter %d Elements",size); 
for( i=0; i < size; i++)
{
scanf("%d",&a[i]);
}
heapsort(a, size);
getch();
}
void heapsort(int a[], int length)
{
buildheap(a, length);
int heapsize, i, temp;
heapsize = length - 1;
for( i=heapsize; i >= 0; i--)
{
temp = a[0];
a[0] = a[heapsize];
a[heapsize] = temp;
heapsize--;
satisfyheap(a, 0, heapsize);
}
for( i=0; i < length; i++)
{
printf("\t%d",a[i]);
}
}
void buildheap(int a[], int length)
{
int i, heapsize;
heapsize = length - 1;
for( i=(length/2); i >= 0; i--)
{
satisfyheap(a, i, heapsize);
}
}
void satisfyheap(int a[], int i, int heapsize)
{
int l, r, largest, temp;
l = 2*i;
r = 2*i + 1;
if(l <= heapsize && a[l] > a[i])
{
largest = l;
}
else
{
largest = i;
}
if( r <= heapsize && a[r] > a[largest])
{
largest = r;
}
if(largest != i)
{
temp = a[i];
a[i] = a[largest];
a[largest] = temp;
satisfyheap(a, largest, heapsize);
}
}
