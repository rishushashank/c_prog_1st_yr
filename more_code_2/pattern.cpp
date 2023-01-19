#include<iostream>
using namespace std;
 void pattern(int n)
 {
     int a=1,x=n;
     while(n!=0)
     {
         for(int i=1;i<=a;i++)
         {
              cout<<i;
              if(a>i)
             {
                 for(int j=1;j<=i;j++)
                   {
                       cout<<"*";
                   }
             }
         }
         cout<<""<<endl;
         n--;
         a++;

     }
 }

 int main()
 {
     int t,n;
     cin>>t;
     while(t!=0)
     {
         cin>>n;
         pattern(n);
     }
 }
