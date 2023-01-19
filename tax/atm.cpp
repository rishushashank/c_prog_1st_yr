#include<iostream>
using namespace std;
int main()
{
    int amount;
    double balance;
    cin>>balance;
    cin>>amount;
    double rem;
    if(amount%5==0)
    {
        if(amount<balance && ((amount+0.5)<=balance))
         {
             rem=(balance-(amount+0.5));
             cout<<rem<<endl;
         }
         else
         cout<<balance<<endl;
    }
    else
         {
            cout<<balance<<endl;
         }
}
