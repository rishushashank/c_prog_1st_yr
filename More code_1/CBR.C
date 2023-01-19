#include<stdio.h>
#include<conio.h>
 int sum(int a[],int b[],int c[],int length);
 int zadu(int z[3],int w[3]);

 int main()
 {
     int x[3]={1,2,3},y[3]={1,2,3},j[3],i;
     /*sum(x,y,j,3);*/
     zadu(x,y);
    /* for(i=0;i<3;i++)
        printf("%d",j[i]);*/
 }
 int sum(int a[],int b[],int c[],int length)
 {
     int i;
     for(i=0;i<length;i++)
        c[i]=a[i]+b[i];


 }
 int zadu(int z[3],int w[3])
 {
     int i;
      for(i=0;i<3;i++)
        printf("\n%d",z[3]);
 }
/*
float average(int b[]);
const int asize=5;
int main()
{
    int x[asize],i;float x_avg;
     for(i=0;i<asize;i++)
        scanf("%d",&x[i]);
    x_avg=average(x);
    return(0);

}

float average(int b[])
{
    int i,total=0;
    for(i=0;i<asize;i++)
        total=total+b[i];
    return((float)total/(float)asize);
}*/

