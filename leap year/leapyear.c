/*leap year check*/
#include<stdio.h>
#include<coniO.h>
int main()
{
    int y;
    printf("Enter your  year to check\n\t");
    scanf("%d",&y);
    if(( y%4==0 &&  y%100!=0)||( y%400==0))
    {
        printf("This is leap year");
    }
    else
    {
        printf("Not a leap year");
    }
    return 0;
    getch();
}
