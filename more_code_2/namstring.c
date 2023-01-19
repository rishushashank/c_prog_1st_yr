#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    char nam[5][20],i,j;
    for(i=0;i<5;i++)
    {
        printf("enter your name:=");
        scanf("%s",nam);
    }
    gets(nam);
}
