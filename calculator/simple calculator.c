#include<stdio.h>
int main()
{
    int a,b;
    char c;
    float result;
    printf("enter two no.\n");
    scanf("%d %d",&a,&b);
    printf(" enter your opreation\n\t");
    scanf(" %c",&c);
    if (c=='+')
    {
        result=a+b;
    }
    else
    {
        if(c=='-')
        {
            result=a-b;
        }
        if(c=='*')
        {
            result=a*b;
        }
        if(c=='%')
        {
            result=a%b;
        }
        if else
        {
            printf("invalid input");
        }
    }
    printf("RESULT=%f",result);
    return 0;
}
