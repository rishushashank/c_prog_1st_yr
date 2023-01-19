#include<stdio.h>
#include<conio.h>
void main()
#define pi 3.1415926
{
    float radius,a;
    float area( float radius);

    printf("enter radius= ");
    scanf("%f",&radius);
    a=area(radius);
    printf("area is %f",a);
    getch();
}
float area(float r)
{
    float x;
    x=pi*r*r;
    return (x);
}
