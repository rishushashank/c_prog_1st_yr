#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    int s=((a+b+c)/d);
	    int r=((a+b+c)%d);
	    if(r==0)
	    cout<<s<<endl;
	    else
	    cout<<(s+1)<<endl;

	}
	return 0;
}
