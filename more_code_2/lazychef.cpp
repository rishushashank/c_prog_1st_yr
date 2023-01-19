#include<iostream>
using namespace std;

int main()
{
    int t,x,d,m;
    cin>>t;
    while(t!=0)
    {
       cin>>x>>m>>d;
       int a=x*m;
       int b=x+d;
       if(a>b)
       {
           cout<<b;
       }
       else
       {
           cout<<a;
       }
       t--;
    }
}
