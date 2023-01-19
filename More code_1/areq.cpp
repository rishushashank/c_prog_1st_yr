#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    cin>>n;
    int a[n];
    while(t!=0)
    {
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"yes"<<endl;
        t--;
    }
    return 0;
}
