#include<conio.h>
#include<stdio.h>
void main()
{
    int a[20],n,i,item,found=0,pos=0;
    printf("enter the no. of input=");
    scanf("%d",&n);

    printf("enter the value of all no.=");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter your no.you want to check=");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(item==a[i])
        {
            pos=i;
            printf("sucessfull search and its position is %d.",pos+1);
            found=1;
            break;
        }
    }
    if(found==0)
            printf("unsuccesfull search");

        getch();
}
