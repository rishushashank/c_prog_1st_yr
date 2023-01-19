#include<stdio.h>
#include<conio.h>
void main()
{
    int p,q,x,y,r;
    char z;
    float a,b,c;
printf("\n1. calulator");
printf("\n2. even or odd");
printf("\n3. greter than");

while(1){

printf("\n\n what you want=");
scanf("%d",&r);
switch(r)
{
case 1:

    printf("enter first no.=");
    scanf("%f",&a);
    printf("\n enter your opreation=");
    scanf(" %c",&z);
    printf("\n enter your second no.=");
    scanf("%f",&b);
    switch (z)
    {
        case '-':
            c=a-b;
        printf("sub of two no is=%f",c);
        break;
        case '+':
            c=a+b;
        printf("sum of two no.=%f",c);
        break;
        case '*':
            c=a*b;
        printf("mult. of two no.=%f",c);
        break;
        case '/':
            c=a/b;
        printf("div. of two no.=%f",c);
        break;
        default:
            printf("invalid input");
    }

    break;
case 2:


    printf("enter your no.");
    scanf("%d",&x);
    y= x%2;
    if(y==0)
    printf("even");
    else
        printf("odd");
   break;

case 3:

    printf("enter first no.=");
    scanf("%d",&p);
    printf("\n enter second no.=");
    scanf("%d",&q);
    r=p<q? q:p;
    printf("grater no.=%d",r);

    break;
default :
 printf("invalid input");
}
 getch();
}
}
/*
}

 void calculator()

{

    float a,b,c;
    char ope;
    printf("enter first no.=");
    scanf("%f",&a);
    printf("enter your opreation=");
    scanf (" %c",&ope);
    printf("enter your second no.=");
    scanf("%f",&b);
    switch (ope)
    {
        case '-':
            c=a-b;
        printf("sub of two no is=%f",c);
        break;
        case '+':
            c=a+b;
        printf("sum of two no.=%f",c);
        break;
        case '*':
            c=a*b;
        printf("mult. of two no.=%f",c);
        break;
        case '/':
            c=a/b;
        printf("div. of two no.=%f",c);
        break;
        default:
            printf("invalid input");

    }


}

void even()
{


    int x,y;
    printf("enter your no.");
    scanf("%d",&x);
    y= x%2;
    if(y=0)
    printf("even");
    else
        printf("odd");

}

void greater()
{
    int x,y,z;
    printf("enter your first  no.");
    scanf("%d",x);
    printf("enter your second no.");
    scanf("%d",&y);
    x<y? printf("x"):printf("y");
}

AA*/
