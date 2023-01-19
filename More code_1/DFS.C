


#include<stdio.h>
#include<conio.h>
int a[20][20],reach[20],n;
void dfs(int v)
{
 int i;
 reach[v]=1;
 for(i=1;i<=n;i++)
  if(a[v][i] && !reach[i])
  {
   printf("\n %d->%d",v,i);
   dfs(i);
  }
}
int main()
{
 int i,j,count=0;
// clrscr();
 printf("\n Enter number of vertices:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  reach[i]=0;
  for(j=1;j<=n;j++)
   a[i][j]=0;
 }
 printf("\n Enter the adjacency matrix:\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
{ printf("(%d,%d)=",i,j);
   scanf("%d",&a[i][j]);
   }
 dfs(1);
 printf("\n");
 for(i=1;i<=n;i++)
 {
  if(reach[i])
   count++;
 }
 if(count==n)
  printf("\n Graph is connected");
 else
  printf("\n Graph is not connected");
 getch();
 return 0;
}
/*
DFS.C
Displaying DFS.C.




#include<stdio.h>
#include<conio.h>
int Knapsackpart(float p[],float v[],float w[],int n,int c)
{
int i;
float t=0;

	for(i=0;i<n;i++)
	{
		if(t<c)
		{
		if((t+w[i])>c)
		   {
		   w[i]=c-t;
		   v[i]=w[i]*p[i];
		   t=c;
		   }

		else
		{
		   t=t+w[i];
		}
	      }
	      else
	      break;
	  }
	  return i;


}

int main()
{
	int n,i,j;
	float c,p[10],w[50],v[10],sum_vi=0.0,sum_wi=0.0,temp;
//	clrscr();
	printf("\nEnter the number of Items:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter Weight of Items");
	scanf("%f",&w[i]);
	printf("Enter the value of Items");
	scanf("%f",&v[i]);
	  p[i]=v[i]/w[i];

	}

	printf("\nEnter Capacity:");
	scanf("%f",&c);
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	    if(p[i]<p[j])
		{
		temp=p[j];
		p[j]=p[i];
		p[i]=temp;
	     //*********** //
		temp=v[j];
		v[j]=v[i];
		v[i]=temp;
	     //*********** //
		temp=w[j];
		w[j]=w[i];
		w[i]=temp;

		}

	  }
	}
     n= Knapsackpart(p,v,w,n,c);
     for(i=0;i<n;i++)
     {
     printf("\n%f",w[i]);
     printf("\t%f",v[i]);
     printf("\t%f",p[i]);
     sum_vi=sum_vi+v[i];
     sum_wi=sum_wi+w[i];
     }
     printf("\n\n sum of value: %f",sum_vi);
     printf("\n\n Total weight: %f",sum_wi);
     getch();
}
*/
