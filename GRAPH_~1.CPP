//Representation of Graph by Linked List.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
struct edge;
struct node
{
    node *next;
    int info;
    edge *adj;
}*start;
struct edge
{
    int dest;
    edge *right;
};
void ins_ver(int);
void dis_ver();
void search(int);
void ins_edge(int,int);
void find_adj(int);
void dis_graph();
void main()
{
    int ch,v,s,d;
    clrscr();
    do
    {
    printf("\nEnter Your Choise:\n");
    printf("\n1)Insert Vertex\n2)Display Vertex\n3)Search Vertex\n4)Insert Edge\n5)Find Adjency\n6)Display Graph\n7)Exit\n");
    scanf("%d",&ch);
    switch(ch)
    {
	case 1: printf("\nEnter Vertex:=");
                scanf("%d",&v);
                ins_ver(v);
                break;
        case 2:dis_ver();
               break;
        case 3:printf("\nEnter Vertex To Search:=");
               scanf("%d",&s);
               search(s);
               break;
	case 4:printf("\nEnter Source Vertex:=");
	       scanf("%d",&s);
               printf("\nEnter Destination Vertex:=");
               scanf("%d",&d);
               ins_edge(s,d);
               break;
	case 5:printf("\nEnter Vertex:");
	       scanf("%d",&v);
	       find_adj(v);
	       break;
	case 6:dis_graph();
	       break;
	case 7:exit(1);

    }
   }while(ch!=7);
getch();
}
void ins_ver(int x)
{
node *p;
p=(node*)malloc(sizeof(node));
p->next=NULL;
p->info=x;
p->adj=NULL;
if(start == NULL)
{
    start=p;
}
else
{
    node *t=start;
    while(t->next!=NULL)
    {
	t=t->next;
    }
    t->next=p;
}
printf("\nVertex Inserted..\n");
}
void dis_ver()
{
    node *p=start;
    while(p!=NULL)
    {
	printf("\t%d",p->info);
	p=p->next;
    }
}
void search(int s)
{
   node *p=start;
   int f=0;
   while(p!=NULL)
   {
    if(s==p->info)
    {
	f=1;
	break;
    }
    p=p->next;
   }
   if(f==1)
      printf("\nVertex is Found.");
    else
      printf("\nVertex is Not Found.");
}
void ins_edge(int s,int d)
{
    node *p=start;
    node *q=start;
    int f=0,k=0;
    while(p!=NULL)
    {
	if(s==p->info)
	{
	    f=1;
	    break;
	}
	p=p->next;
    }
    while(q!=NULL)
    {
	if(d==q->info)
	{
	    k=1;
	    break;
	}
	q=q->next;
    }
    if(f == 1 && k == 1)
    {
	edge *e;
	e=(edge*)malloc(sizeof(edge));
	e->dest=d;
	e->right=NULL;
	if(p->adj==NULL)
	{
	    p->adj=e;
	}
	else
	{
	  edge *t=p->adj;
	  while(t->right!=NULL)
	  {
	    t=t->right;
	  }
	  t->right=e;
	}
	printf("\nEdge is Inserted.");
    }
    else
    {
	printf("\nInvalid Edge.");
    }

}
void find_adj(int x)
{
   node *p=start;
   int a=0;
   while(p!=NULL)
   {
    if(x==p->info)
    {
	a=1;
	break;
    }
    p=p->next;
   }
   if(a==1)
   {
    if(p->adj==NULL)
    {
	printf("\nTheir is noting Adjesant Vertices in the Graph.");
    }
    else
    {
       edge *t=p->adj;
       while(t!=NULL)
       {
        printf("\t%d",t->dest);
        t=t->right;
       }
    }
   }
   else
   {
    printf("\nVertex Not Found.");
   }
}
void dis_graph()
{
node *p=start;
edge *t;
while(p!=NULL)
{
    printf("\n%d",p->info);
    t=p->adj;
    t=p->adj;
    while(t!=NULL)
    {
        printf("-->%d",t->dest);
        t=t->right;
    }
    p=p->next;
}
}