#include<conio.h>
#include<stdio.h>
void main()
{
    float a,b,c;

    printf("enter your income\n");
    scanf("%f",&a);
        if(a<100000)
        {
            printf("0 percent tax\n");
        }

        if(a>100000&a<200000)
       {
           printf("10 percent tax\n");
           b=(a-100000)*0.1;
       }

        if(a>200000)
            {
                printf("20 percent tax\n");
                b=(a-100000)*0.2;
            }

    printf("total tax=%f",b);
    getch();
}
