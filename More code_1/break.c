#include<stdio.h>
#include<conio.h>
void main()
{
    int fact=1,i=1,n;
    printf("enter the value at which get the of factorial=");
    scanf("%d",&n);
    while(1)
    {
        fact=fact*i;
        if(fact>n)
                {
                    printf("factorial of %d is exceed then %d.",i,n);
                break;
                }

            i++;
    }
    getch();
}
