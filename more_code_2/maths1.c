#include<stdio.h>
#include<conio.h>
#include<math.h>

/*sum of square of n numbers*/
void main()
{
    int n,sum=0,i;
    printf("enter the value of n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
    }
    printf("result=%d",sum);
    getch();
}
