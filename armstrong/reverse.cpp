#include<iostream>
using namespace std;
void rev(int a)
{
    int re,num=0;
    while(a!=0)
    {
        re=a%10;
        num=10*num+re;
        a=a/10;
    }
    cout<<num<<endl;
}
int main()
{
int n,a,i;
   cin>>n;
   for(i=0;i<n;i++)
   {
     cin>>a;
     rev(a);
   }
}
