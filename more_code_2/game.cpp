#include<iostream>
using namespace std;
void comp(int a[],int b[],int m, int n)
{
    int j=-1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]%10==b[j]%10&&a[i]%3==0)
               {
                    cout<<a[i]<<endl;
               }
            if(j==-1)
            {
                cout<<j<<endl;
            }
        }
    }
    return;
}
int main()
{
    int t,m,n;
    cin>>t;
    while(t!=0)
    {
    cin>>m>>n;
    int a[m];
    int b[n];
    for(int i=0;i<m;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
        comp(a,b,m,n);
    }

return 0;
}
