#include<stdio.h>

int a[20][20],b[20][20],q[20],visited[20],f=0,r=-1,n;

void bfs(int v)

{
    int i,j;
    for(i=1;i<=n;i++)

    {
        if(b[v][i]==1 && visited[i]==0)
        {
            b[i][v]=0;
            b[v][i]=0;

            printf("\t%d--> %d",v,i);
        }

    }

    for(i=1;i<=n;i++)
    {
       if(a[v][i]==1 && visited[i]==0)
        {
            q[++r]=i;

       }
    }

    if(f<=r)
    {
        visited[q[f]] =1;
        bfs(q[f++]);
    }
}

void main()
{
    int i,j,v;

    printf("Enter number of vertices :\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        visited[i]=0;
        q[i]=0;
    }

printf("\n Enter the  adjacency matrix\n ");

for(i=1;i<=n;i++)

{

    for(j=1;j<=n;j++)
    scanf("%d",&a[i][j]);
}

printf("\n Enter the starting vertex :\n");
 scanf("%d",&v);

 for(i=1;i<=n;i++)
 {
     for(j=1;j<=n;j++)
        b[i][j]=a[i][j];
 }

printf(":\npath:\n");
bfs(v);

printf("\nReachable nodes are :\n");

for(i=1;i<=n;i++)
{
    if(visited[i]==1)
        printf("\t%d",i);
}
}
