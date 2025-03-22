//Representation of Weighted Connected Graph.

#include<stdio.h>
#include<conio.h>
int adj[20][20];
void main()
{
	int v,e,sc,des,i,j,wt;
	clrscr();
	printf("Enter Total Vertices:");
	scanf("%d",&v);
	printf("\nEnter Total Edges:");
	scanf("%d",&e);
	for(i=1;i<=e;i++)
	{
		printf("\nEnter %d Edge:",i);
		printf("\nEnter Source Vertex:");
		scanf("%d",&sc);
		printf("\nEnter Destination Vertex:");
		scanf("%d",&des);
		printf("\nEnter Cost of Edge:");
		scanf("%d",&wt);
		if(sc > v|| des > v||sc <= 0|| des <= 0||wt <= 0)
		{
			printf("Invalid Edge..\n");
			i--;
		}
		else
		{
			adj[sc][des]=wt;
		}
	}
	for(i=1;i<=v;i++)
	{
		for(j=1;j<=v;j++)
		{
			printf("\t%d",adj[i][j]);
		}
		printf("\n");
	}
getch();
}