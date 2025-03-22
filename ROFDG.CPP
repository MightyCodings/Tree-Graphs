
//Representation of Directed Graph
#include<stdio.h>
#include<conio.h>
int adj[50][50];
void main()
{
	int v,e,sc,des,i,j,adj[50][50];
	clrscr();
	printf("Enter Total Vertices:");
	scanf("%d",&v);
	printf("Enter Total Edges:");
	scanf("%d",&e);
	for(i=1;i<=e;i++)
	{
	printf("\nEnter %d edge:",i);
	printf("\nEnter Source Vertex:");
	scanf("%d",&sc);
	printf("\nEnter Destination Vertex:");
	scanf("%d",&des);
		if(sc > v||des > v||sc <= 0||des <= 0)
		{
			printf("\nInvalid Edge..\n");
			i--;
		}
		else
		{
			adj[sc][des]=1;
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