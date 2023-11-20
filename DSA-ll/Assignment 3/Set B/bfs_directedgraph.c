/* Set B1-For Directed Graph*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 50
int queue[MAX],front=-1,rear=-1;
int adj[MAX][MAX];
int visited [MAX];
void bfs(int start,int vertices)
{
				int i,j;
				visited[start]=1;
				queue[++rear]=start;
				printf("\n BFS traversal from vertex %d : ",start+1);
				while (front!=rear)
				{
	   				start=queue[++front];
	   				printf("%d  ",start+1);
	   				for (i=0;i<vertices;i++)
	   				{
	     					if(adj[start][i]==1 && visited[i]==0)
	      				{
	       						visited[i]=1;
	       						queue[++rear]=i;
              	}
           	}
       }
       printf("\n");
}
void main()
{
						int vertices,edges,start,v1,v2,i,j;
						printf("Breadth First Search Traversal \n");

						printf("Enter no of vertices for directed graph : ");
						scanf("%d",&vertices);

						printf("Enter no of edges for directed graph : ");
						scanf("%d",&edges);	
						for (i=0;i<vertices;i++)
	    					for (j=0;j<vertices;j++)
	        			adj[i][j]=0;    
       			for (i=1;i<=edges;i++)
       			{
       	   				printf("Enter the vertices of edges %d : ",i);
       	   				scanf("%d%d",&v1,&v2);
       	   				adj[v1-1][v2-1]=1;
       			}
       	   printf("Enter the starting vertex for BFS :");
       	   scanf("%d",&start);

       	   printf("Adjacency Matrix for directed graph  : ");
       	   for (i=0;i<vertices;i++)
	         printf("    %d",i+1);
	         printf("\n");

	    		for (i=0;i<vertices;i++)
	    		{
	       			printf("\n   %d ",i+1);
	       			for (j=0;j<vertices;j++)
	          	printf("     %d ",adj[i][j]);
	    		}
	    		bfs(start-1,vertices);
}
/*
Breadth First Search Traversal 
Enter no of vertices for directed graph : 4
Enter no of edges for directed graph : 5
Enter the vertices of edges 1 : 1 2
Enter the vertices of edges 2 : 2 3
Enter the vertices of edges 3 : 3 4
Enter the vertices of edges 4 : 1 4
Enter the vertices of edges 5 : 1 3
Enter the starting vertex for BFS :2
Adjacency Matrix for directed graph  : 
    1    2    3    4
1   0    1    1    1
2   0    0    1    0
3   0    0    0    1
4   0    0    0    0
BFS traversal from vertex 2 : 2  3  4
*/