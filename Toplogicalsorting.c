#include<stdio.h>
void dfs(int);
int a[10][10],n,i,vis[10],j=0,k=0;
int expp[10];

void main()
{

    int m,u,v;
    printf("Enter number of vertices : ");
    scanf("%d", & n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a[i][j]=0;
        }
    }
    printf("Enter number of edges");
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        printf("enter an edge :\n");
        scanf("%d%d",&u,&v);
        a[u][v]=1;
    }
    for(i=1;i<=n;i++)
      vis[i]=0;
    for(i=1;i<=n;i++)
    {
        if(vis[i]==0)
        dfs(i);
    }
    printf("topological order : ");
    for(i=n-1;i>=0;i--)
      printf("%d\t",expp[i]);
}
void dfs(int v)
{
    int i;
    vis[v]=1;
    for(i=1;i<=n;i++)
    {
        if(a[v][i]==1 && vis[i]==0)
        dfs(i);
    }
    expp[k++]=v;
}
