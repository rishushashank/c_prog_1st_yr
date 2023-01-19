#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct graph{
int v;
int e;
int **adj;
};

struct graph* graphofmatrix(int v)
{
    int i,j,k;
    struct graph *g=(struct graph*)malloc(sizeof(struct graph));
    if(g)
    {
        printf("error");
        return;
    }
    printf("enter the value of vertex and edges ");
    scanf("%d %d",&g->v,&g->e);
    g->adj=(int*)malloc(sizeof(g->v*g->v));
    for(i=0;i<g->v;i++)
    {
        for(j=0;j<g->v;j++)
            g->adj[i][j]=0;
    }
    printf("enter the pair of node that connect");
    for(k=0;k<g->e;k++)
    {
       scanf("%d %d",&i,&j);
       g->adj[i][j]=1;
       g->adj[j][i]=1;
    }
    return(g);
}
void main()
{
    int i,j,v;
    printf("enter the value of vertices");
    scanf("%d",&v);
    struct graph *g;
    g=graphofmatrix(v);
    for(i=0;i<v;i++)
         for(j=0;j<v;j++)
         printf("\n%d %d",g->adj[i][j]);
    getch();

}
