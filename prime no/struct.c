#include<stdio.h>
#include<conio.h>

void main()
{

    struct class
    {
        char name[10];
        int roll;
        int marks;
    };
     struct class a1,a2,a3;
    a1.name='r';
    a1.roll=1;
    printf("%c",a1.name);
     printf("%d",a1.roll);
    getch();
}
