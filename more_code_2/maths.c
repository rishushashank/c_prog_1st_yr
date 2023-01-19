/* x+pw(x,2)/2!+pw(x,3)/3!+.........*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    int n,x,i,j,a=1;
    float sum=0;

    printf("enter the value of n=");
    scanf("%d",&n);
    printf("enter the value of x=");
    scanf("%d",&x);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            a=a*j;
        }
        sum=sum+ pow(x,i)/a;
        a=1;
    }
    printf("result=%f",sum);
    getch();
}
