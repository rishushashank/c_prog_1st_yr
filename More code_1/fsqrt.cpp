#include<iostream>
#include<math.h>
using namespace std;
void sqrt(int a)
{
    int value;
    value=pow(a,0.5);
    cout<<value<<endl;
}
int main()
{
    int n,a,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        sqrt(a);
    }
}
