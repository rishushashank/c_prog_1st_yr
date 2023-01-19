#include<conio.h>
#include<stdio.h>
void main()
{
    float p,c,m,h,e,sum,per;
    while(1)
    {
    int roll;
    printf(" enter your roll no.=\n");
    scanf("%d",&roll);
    if(roll>0&&roll<67)
    {
    printf("enter your marks in physics=\n\t");
    scanf("%f",&p);
    printf("enter your marks in chemistry=\n\t");
    scanf("%f",&c);
    printf("enter ypurs marks in maths=\n\t");
    scanf("%f",&m);
    printf("enter your marks in hindi=\n\t");
    scanf("%f",&h);
    printf("enter your marks in english=\n\t");
    scanf("%f",&e);
    sum=p+c+m+e+h;
    printf("total=%f\n",sum);
    per=sum/500*100;
    printf("your percent=%f\n\n",per);
    if(per>100)
    {
        printf("invalid input marks\n\n");
        break;
    }

    if(per>=60)
        printf("first division\n\n");
    if(per>=50&&per<=59)
        printf("second division\n\n");
    if(per>=40&&per<=49)
        printf("third devision\n\n");
    if(per<=40)
        printf("fail\n\n");

    }
    else
        printf("invalid roll no.\n\n");
    getch();
    }
}

