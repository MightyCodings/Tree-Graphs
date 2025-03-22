//Representaion of Undirected Graph.

#include <stdio.h>
#include <conio.h>
void main()
{
    int edges,v,sc, dest, adj[50][50],i,j;
    clrscr();
    printf("Enter Total Vertices:");
    scanf("%d",&v);
    printf("Enter Total Edges:");
    scanf("%d",&edges);
    for (i=1;i<=edges;i++)
    {
	printf("Enter %d Edge:",i);
	printf("\nEnter Source Vertex:");
	scanf("%d", &sc);
	printf("Enter Destination Vertex:");
	scanf("%d", &dest);
	if (sc > v || dest > v || sc <= 0 || dest <= 0)
	{
	    printf("Invalid Edge\n");
	    i--;
	}
	else
	{
	    adj[sc][dest]=1;
	    adj[dest][sc]=1;
	}
    }
	for (i=1;i<=v;i++)
	{
	    for (j=1;j<=v;j++)
	    {
		printf("\t%d",adj[i][j]);
	    }
	    printf("\n");
	}
getch();
}
