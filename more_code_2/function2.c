#include<conio.h>
#include<stdio.h>
void main()
{
    int a,b;
    void swap(int,int);
    printf(" enter the value of A & B\n");
    scanf("%d %d",&a ,&b);
    swap(a,b);
    getch();

}
void swap(int a,int b)
{
    int r;
    r=a;
    a=b;
    b=r;
    printf("after swaping the value of A & B is %d & %d",a,b);
}
