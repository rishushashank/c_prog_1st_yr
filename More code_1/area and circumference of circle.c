#include<stdio.h>
#include <conio.h>
#define pi 3.143

void main()
{
    float radius,area,circumference;
    float fun1(float radius),fun2(float radius);

    printf("enter the rdius of circle=");
    scanf("%f",&radius);
    area=fun1(radius);
    circumference=fun2(radius);
    printf("Area=%f\n",area);
    printf("Crumference=%f",circumference);
    getch();
}

float fun1(float r)
{
    float a;
    a=pi*r*r;
    return a;
}

float fun2(float r)
{
    float c;
    c=2*pi*r;
    return c;
}
