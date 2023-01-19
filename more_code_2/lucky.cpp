#include<iostream>
using namespace std;
void check (int num)
{
    int rem=0;
    while(num!=0)
    {
        rem=num%10;
        if(rem==3||rem==7)
        {
            num=num/10;
        }
        else
        {
            cout<<"BETTER LUCK NEXT TIME"<<endl;
            return ;
        }
    }
        cout<<"LUCKY"<<endl;

    }
int main()
{
    int t;
    cin>>t;
    int a[t];
    for(int i=0;i<t;i++)
        {
            cin>>a[i];
        }
    for(int i=0;i<t;i++)
        {
            check(a[i]);
        }
}
