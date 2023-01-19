#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t!=0)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int x=pow((a-c),2);
        int y=pow((b-d),2);
        int z=(x+y);
        if(z==k)
        {
            cout<<"yes"<<endl;
            break;
        }
        else if(z%2==0)
        {
            if(k%2==0)
            {
                cout<<"yes"<<endl;
                break;
            }
            else
            {
                 cout<<"no"<<endl;
                 break;
            }
        }
        else
        {
            {
            if(k%2==0)
            {
                cout<<"no"<<endl;
                break;
            }
            else
            {
                 cout<<"yes"<<endl;
                 break;
            }
        }
        }

        t--;
    }
    return 0;
}
