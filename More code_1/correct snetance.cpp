#include<iostream>
using namespace std;

int main()
{
    int t,q;
    char c[100];
    cin>>t;
    while(t!=0)
    {
        int k;
        int i=0;
        cin>>k;
        while(k!=0)
          {
              cin>>c[i];
              int t=c[i];
              if(t==48)
              {
                  q=i;
                  break;
              }
              i++;
          }
        for(int i=0;i=q;i++)
        {
            if(97<=(int)c[i]&&(int)c[i]<=105)
            {
                cout<<"yes";
                break;
            }
           else if(78<=(int)c[i]&&(int)c[i]<=90)
            {
                cout<<"yes";
                break;
            }
            else
            {
                cout<<"no";
                break;
            }


        }

        t--;
    }
}
