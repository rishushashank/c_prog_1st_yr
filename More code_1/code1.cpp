#include<iostream>
using namespace std;

void check(int a[],int n,int k)
{
    int num=0;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(j%a[i]!=0)
            {
               cout<<"0";
            }
            else
            {
                cout<<"0";
            }
        }
    }
    cout<<num;
}

int main()
{
    int t,n,k;
    cin>>t;
    while(t!=0)
    {
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        t--;
    }
}
