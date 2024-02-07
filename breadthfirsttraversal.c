#include<stdio.h>
#include<stdlib.h>
int booli[20]={0};
int adj[20][20]={0};
int vertex[20];
int n;
int q[100];
int r=-1,f=-1;
void insert(int v)
{
	if(r==100)
	{
	   printf("over flow\n");
		exit(1);
	}
	q[++r]=v;
	if(f==-1)
	f++;

}
int delete()
{	int y;
	if(f==-1||f-1==r)
	{
	  printf("under flow\n");
		exit(2);
	}
	y=q[f];
	f=f+1;
	return y;
}

void addedge(int s,int e)
{
	int i,j,c1,c2;
	for(i=0;i<5;i++)
	{
	if(s==vertex[i])
	c1=i;
	if(e==vertex[i])
	c2=i;
	}
	adj[c1][c2]=1;
	adj[c2][c1]=1;	
}
void main()
{
	int i,s,e,root,j,ch;
	int n;
	int op;
	printf("enter no of vertices in graph\n");
	scanf("%d",&n);
	printf("enter vertices\n");
	for(i=0;i<5;i++)
	scanf("%d",&vertex[i]);
	printf("add edges\n");
	printf("continue  1/0");
	scanf("%d",&op);
	while(op==1)
	{
		
		printf("\nenter edges\n");
		scanf("%d%d",&s,&e);
		addedge(s,e);
			printf("continue  1/0");
			scanf("%d",&op);
		
	}
	do{
	
	printf("\nenter root node\n");
	scanf("%d",&root);
	printf("\ndepth first search is\n");
	bfs(root);
	printf("\ncontinue 1/0\n");
	scanf("%d",&ch);}
	while(ch==1);

}
