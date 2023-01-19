#include<conio.h>
#include<stdio.h>

int main()
{
    float balance=10000,n;
    float amount,total;
    printf("ATM");
    printf("\n 1> BALANCE \t 2>WITHDRAWN  \t 3>DEPOSIT ");
    printf("\n enter your option:");
    scanf("%d",&n);

    if(n==1)
           printf("your current balance =%d",balance);
    if(n==2)
       {
            printf("enter the amount withdrwan:");
            scanf("%d",&amount);
            if(amount<=balance)
                printf("your current avlaible balance =%d",(balance-amount));
            else
                {
                    printf("amount have no fun");
                }
        }
    if(n==3)
            {
            printf("enter the amount deposit:");
            scanf("%d",&total);
            printf("your current avlaible balance =%d",(balance+amount));
          }




    getch();
    return 0;
}
