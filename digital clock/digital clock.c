#include<stdio.h>
#include<conio.h>
void main()
{
    int h=0,m=0,s=0;
    printf("please enter your time in HH:MM:SS\n");
    scanf("\t\t%d%d%d\n",&h,&m,&s);
    start:
    for(h;h<24;h++)
    {
        for(m;m<60;m++)
        {
            for(s;s<60;s++)
            {
                printf("\t\t%d:%d:%d\n",h,m,s);
                int i;
                for(double  i=0;i<361999999;i++)
                i++;
                i--;
            }
            s=0;
        }
        m=0;
    }
    h=0;
    goto start;
    getch();
}
