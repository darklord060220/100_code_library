#include <bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll x,y,k,a,sti=1,c=0;
	    cin>>x>>y>>k;
	    a=k*y+k;
	    if((a%(x-1)==0))
        {
            c=a/(x-1);
        }
        else
            {
            c=a/(x-1);
            c=c+1;
            }

	  if((((c-1)*(x-1))+1)>=a)
{
    c=c-1;
}
        cout<<c+k<<"\n";
	}
	return 0;
}


