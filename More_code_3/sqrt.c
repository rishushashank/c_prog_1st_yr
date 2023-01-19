
#include<stdio.h>
#include<math.h>

int main()
{
    int n,a,i;
    printf("enter the total no.");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        int sqr=pow(a,0.5);
        printf("%d\n",sqr);
    }
    return 0;
}
