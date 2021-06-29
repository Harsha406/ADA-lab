#include<stdio.h>
int v[10][10];
int max(int a,int b)
{
  return((a>b)?a:b);	
}	

int knapsack(int n,int w[],int p[],int m)
{
	int i,j;
	
	for(i=0;i<=n;i++)
	   {
		   for(j=0;j<=m;j++)
		    {
				 if(i==0||j==0)
				    v[i][j]=0;
				    
				 else
				   if(j<w[i])
				      v[i][j]=v[i-1][j];
				      
				    else
				    v[i][j]=max(v[i-1][j],p[i]+v[i-1][j-w[i]]);     

		}
	}	
	
	printf("Value matrix is:\n ");
	
	for(i=0;i<=n;i++)
	
	  {
		  for(j=0;j<=m;j++)
		  
		    printf("%d\t",v[i][j]);
		    
		    printf("\n");
		  }
		 } 
		 
		int main()
		{
			int w[10],p[10],m,n,i,j,count=0,x[10]={0};
			
			printf("Enter number of items:\n");
			 scanf("%d",&n);
			 
			 printf("Enter the weights :\n");
			   for(i=1;i<=n;i++)
			     scanf("%d",&w[i]);
			     
			   printf("Enter the profits:\n");
			     for(i=1;i<=n;i++)
			       scanf("%d",&p[i]);
			    printf ("Enter the knapsack capacity:\n ");
			    scanf("%d",&m);
			    
			    knapsack(n,w,p,m);
			    i=n;
			    j=m;
			    
			    while((j!=0)&& (i!=0))
			     {
					  if(v[i][j]!=v[i-1][j])
					  {
						  x[i]=1;
						  j=j-w[i];
						  i--;
						  
					  }   
			     else
			           i--;
			  			  				  		
			 } 
			 
			 printf("\n Items included are\n");
			 printf("SI.No\t Weight\tprofit\n");
			 
			 for(i=1;i<=n;i++)
			  {
				  if(x[i]==1)
				  printf("%d\t%d\t%d\n",++count,w[i],p[i]);
				  
				 } 
				 printf("Total profit is =%d\n",v[n][m]); 
			  }
