#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    /*programe to write the solve the quadratc equation*/
    float a,b,c,disc,d,r1,r2;

    printf("enter the coefficient of the given quadratic equation\n");
    scanf("%f %f %f",&a,&b,&c);
    disc=b*b-4*a*c;
    d=sqrt(disc);
    printf("%d\n",d);
    if(disc>0)
    {
        printf("rots are real and unequal\n");
            r1=(-b-d)/(2*a);
            r2=(-b+d)/(2*a);
            printf("%f %f",r1,r2);
    }
        else
            if(disc==0)
            {
            printf("roots are real and equal\n");
            r1=(-b-d)/(2*a);
            r2=(-b+d)/(2*a);
            printf("%f %f",r1,r2);
            }
        else
            printf("roots are imaginary\n");

        getch();

}
