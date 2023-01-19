#include <stdio.h>
int main(){
    int n,i,num=0,c=0;
    float per;
    int a[100];
    printf("Enter the number of students\n");
    scanf("%d",&n);
    printf("Enter the percentage of students\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }

    for(i=0;i<n;i++){
        if(a[i] >= 60){
            num++;
        }
        if(a[i] > 100){
            c++;
        }
    }
    if(c >= 1){
        printf("Error : you have input marks greater than 100\n");
    }
    else{
        if(num == 0){
            printf("No student is pass");
        }
        else{
            per = (num * 100)/n;
            printf("percentage of passed student is %f",per);
        }
    }

    return 0;
}
