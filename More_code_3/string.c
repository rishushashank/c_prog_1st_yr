#include<conio.h>
#include<stdio.h>
int main()
{
    char a[50];
    int i;
    printf("enter the string");
    for(i=0;i<5;i++)
        scanf("%c",&a[i]);
    for(i=0;i<10;i++)
        printf("%c",a[i]);
    getch();
}
