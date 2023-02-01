// floyds
#include<stdio.h>

#include<time.h>

int min(int,int);

void floyds(int p[10][10],int n)
{
 	int i,j,k;
 	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(i==j)
					p[i][j]=0;
				else
    					 p[i][j]=min(p[i][j],p[i][k]+p[k][j]);
			}
		}
	}
}

int min(int a,int b)
{
	 if(a<b)
  		return(a);
 	else
 		 return(b);
}

void main()
{
     double total_time;
    clock_t startClock, endClock;
    clock_t start=clock(); 
 		int p[10][10],w,n,e,u,v,i,j;
		printf("\n Enter the number of vertices:");
 		scanf("%d",&n);
 		
 		printf("\n Matrix of input data:\n");
 		for(i=1;i<=n;i++)
 		{
 			 for(j=1;j<=n;j++)
   			 {
   			     scanf("%d",&p[i][j]);
   			 }
 		}
		 floyds(p,n);
		 printf("\n Transitive closure:\n");
 		for(i=1;i<=n;i++)
		 {
  			for(j=1;j<=n;j++)
   			printf("%d \t",p[i][j]);
 			 printf("\n");
		 }
		 printf("\n The shortest paths are:\n");
		 for(i=1;i<=n;i++)
 		 for(j=1;j<=n;j++)
  		{
  			 if(i!=j)
   			 printf("\n <%d,%d>=%d",i,j,p[i][j]);
		  }
		  endClock= clock();
    total_time=(double)(endClock-startClock)/CLOCKS_PER_SEC;
    printf("\nTIME= %lf", total_time);
}