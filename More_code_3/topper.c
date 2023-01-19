#include<stdio.h>
#include<string.h>
void name(char a[],int b[]){
    printf("Enter the name of student\n");
    scanf("%s",a);
    printf("Enter the marks\n");
    for(int i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
}
int sum(int b[]){
    int s = 0;
    for(int i=0;i<5;i++){
        s = s+ b[i];
    }

    return s;
}
int max(int b[]){
    int i=0,j =0,max=0;
    for(i=0;i<5;i++){
        if(max < b[i]){
            max = b[i];
            j = i;
        }
    }
    return j;
}
int main(){

    int num1[5],num2[5],num3[5],num4[5],num5[5],avg[5];
    char names[5][20];
    int index =0;

    name(names[0],num1);
    name(names[1],num2);
    name(names[2],num3);
    name(names[3],num4);
    name(names[4],num5);
    avg[0] =sum(num1);
    avg[1] =sum(num2);
    avg[2] =sum(num3);
    avg[3] =sum(num4);
    avg[4] =sum(num5);
    index = max(avg);
    printf("The student which has maximum number is : ");
    puts(names[index]);
    printf("Avg is %d",avg[index]);

    return 0;

}/*#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
    void name(char a[],int b[], int size);
    int sum(int x[]);
    int max(int b[]);
    char names[5][20];
    int marks1[5], marks2[5], marks3[5], marks4[5], marks5[5],total[5],index=0;
    name(names[0],marks1,5);
    name(names[1],marks2,5);
    name(names[2],marks3,5);
    name(names[3],marks4,5);
    name(names[4],marks5,5);
    total[0]=sum(marks1);
    total[1]=sum(marks2);
    total[2]=sum(marks3);
    total[3]=sum(marks4);
    total[4]=sum(marks5);
    index=max(total);
    printf("topper of the student name=");
    puts(names[index]);
    printf("its marks=%d",total[index]);
}

void name(char a[],int b[], int size)
{
    int i;
    printf("enter the name of the student=\n");
   gets(a);
    printf("enter the marks of the student=\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
}
int sum(int x[])
{
    int s=0,i;
    for(i=0;i<5;i++)
        s=s+x[i];
        return(s);
}
int max(int b[])
{
    int i,j=0,max=0;
    for(i=0;i<5;i++)
    {
        if(max<b[i]){
            max=b[i];
            j=i;
        }
    }
    return j;
}*/

