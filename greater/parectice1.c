/*find the greater no. in given three no.'s*/
#include<stdio.h>
#include<conio.h>
int main()
{

    int a,b,c,max,i=0;
    while(1)
        {
    printf("enter your three no. \n");
    scanf("%d%d%d",&a,&b,&c);
    max=a;
    if(b>max&&b>c)
    {
        max=b;;
    }
    if(c>a)
    {
        max=c;
    }
    printf("%d is greater\n",max);
        }
    return 0;
}
