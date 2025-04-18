#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<process.h>
struct node
{
node *left;
int info;
node *right;
}*root;
node * create();

void insert(int);

void inorder(node *);

void search(int);

void main()
{
      clrscr();
      int ch,x,srch;
      node *p;
      do
      {
	printf("\nEnter your choise:");
	printf("\n1)Insert\n2)Inorder\n3)searh\n4)exit\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("Enter your Data:");
		       scanf("%d",&x);
		       insert(x);
		       break;

		case 2:inorder(root);
		       break;

		case 3:printf("Enter Search Value:");
		       scanf("%d",&srch);
		       search(srch);
		       break;

		case 4:exit(1);
	}
	}while(ch!=4);
}

node * create()
{
	node *p;
	p=(node *)malloc(sizeof(node));
	return(p);
}

void insert(int x)
{
	node *p,*temp;
	p=create();
	p->left=NULL;
	p->info=x;
	p->right=NULL;
	if(root==NULL)
	{
		root=p;
		printf("\nNode is Inserted.\n");
	}
	else
	{
		temp=root;
		while(temp != NULL)
		{
			if(p->info < temp->info)
			{
				if(temp->left == NULL)
				{
					temp->left=p;
					printf("\nNode is Inserted.");
					break;
				}
				else
				{
					temp=temp->left;
				}
			}
			else if(p->info > temp->info)
			{
				if(temp->right == NULL)
				{
					temp->right=p;
					printf("Node is Inserted.\n\n");
					break;
				}
				else
				{
					temp=temp->right;
				}
			}
		}
	}
}

void inorder(node *p)
{
	if(p!=NULL)
	{
	 inorder(p->left);
	 printf("\t%d",p->info);
	 inorder(p->right);
	}
}


void search(int srch)
{
	int f = 0;
	node *p;
	p=root;
	while(p!=NULL)
	{

		if(srch == p->info)
		{
			f=1;
			break;
		}
		else if(srch < p->info)
		{
			p=p->left;
		}
		else if(srch > p->info)
		{
			p=p->right;
		}

	}
	if(f == 1)
	{
		printf("\nNode is Found.");
	}
	else
	{
		printf("\nNode is not Found.");
	}
}