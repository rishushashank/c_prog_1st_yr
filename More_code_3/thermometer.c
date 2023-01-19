#include<stdio.h>
#include<conio.h>

void main()
{
    float c,fa;
    int n;
while(1)
{

    printf("1.covert degree centigrade to fahrenite.\n2.fahrenite to degree centigrade\n\n");
    printf("what you want=");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("enter the temp. in centigrade=");
        scanf("%f",&c);
        fa=1.8*c+32;
        printf("Temp. in Fahrenite=%f\n\n",fa);
        break;
        case 2:
        printf("enter the temp. in fahrenite=");
        scanf("%f",&fa);
        c=(fa-32)/1.8;
        printf("Temp. in degree centigrade=%f\n\n",c);
        break;
        default:
        printf("invalid input\n\n");
    }
    getch();
}
}
