#include<stdio.h>
int n,s,adj[10][10],queue[10];
int visited[10]={0,0,0,0,0,0,0,0,0,0};
int front=-1,rear=-1,item;
void enqueue(int item)
{
	if(rear==9)
		printf("Queue is full\n");
	else
	{
		if(rear==-1)
		{
			front=rear=0;
			queue[rear]=item;
		}
		else
		{
			rear=rear+1;
			queue[rear]=item;
		}
	}	
}
int dequeue()
{
	int k;
	if((front>rear)||(front==-1))
		return (0);
	else
	{
		k=queue[front];
		front++;
		return (k);
	}
}
void bfs(int s,int n)
{
	int p,i;
	enqueue(s);
	visited[s]=1;
	p=dequeue();
	if(p!=0)
		printf("%d ",p);
	while(p!=0)
	{
		for(i=1;i<=n;i++)
		{
			if(adj[p][i]==1 && visited[i]==0)
			{
				enqueue(i);
				visited[i]=1;
			}
		}
		p=dequeue();
		if(p!=0)
			printf("%d ",p);
	}
	printf("\n");
}
int main()
{
	printf("Enter the no of vertices: ");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:\n");
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%d",&adj[i][j]);
		}
	}
	printf("Enter the starting vertex: ");
	scanf("%d",&s);
	bfs(s,n);
	return 0;
}
