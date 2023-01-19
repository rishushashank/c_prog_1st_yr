#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	     for(int x=2;x<=n;x++)
	     {
	         int ls=0;
	         int rs=0;
	         int z=n-x;
	   ls=(x*(x-1))/2;
	   rs=(z*x)+((z*(z+1))/2);
	    if(ls+rs==s)
	    {
	        cout<<x<<endl;
	        break;
	    }

	     }
	        cout<<"-1"<<endl;


	}
	return 0;
}
