#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin>>t;
     while(t!=0)
     {
         int n,k;
         int m=0,z=0;
         cin>>n>>k;
         int j=k;
         int a[n];
         for(int i=1;i<=n;i++)
         {
             cin>>a[i];
         }
         sort(a,a+n);
          if(n==1)
         {
             cout<<a[n]<<endl;
             continue;
         }
         for(int i=n;i>0;i=i-2)
         {
             if(k==0)
                break;
             m=m+a[i];
             k--;
         }
         for(int i=n-1;i>0;i=i-2)
         {
              if(j==0)
                break;
             z=z+a[i];
             j--;
             if(i == 1){
	            z= z + a[i];
	        }
         }
         cout<<max(m,z)<<endl;
         t--;
     }
     return 0;
 }
