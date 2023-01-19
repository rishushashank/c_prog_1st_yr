#include<conio.h>
#include<stdio.h>
void main()
{
    float p,c,m,h,e,sum,per;
    printf("enter your 5 subj marks for physics chemistry maths hindi english respectively\n");
    scanf("%f%f%f%f%f\n",&p,&c,&m,&h,&e);
    printf(" your marks  phy=%f chem=%f  maths=%f hindi=%f eng=%f\n",p,c,m,h,e);

       sum=p+c+m+e+h;
       printf("total marks=%f out of 500\n",sum);
       per=sum/5;
       printf("your percent=%f out of 100\n\n",per);

    if(p>101&&c>101&&m>101&&h>101&&e>101)
    {
        printf("invalid marks");
    }

    if(per>=60)
        printf("first division");
    if (per>=50&&per<60)
        printf("second division");
    if(per>=40&&per<50)
        printf("third devision");
    if(per<=40)
        printf("fail");

    getch();
}

