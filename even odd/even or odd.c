#include<stdio.h>
#include<conio.h>
void main()
{
    int n,e,o,b;

    printf("enter no. at which you get even or odd no.= ");
    scanf("%d",&n);

    printf("even\n");
    for(e=1;e<=n;e++)
    {
        b=e%2;
        if(b==0)
        {
            printf("%d\t",e);
        }
    }
    printf("\nodd\n");
    for(o=1;o<=n;o++)
    {
        if(o%2!=0)
        {
            printf("%d\t",o);
        }
    }
    getch();
}
