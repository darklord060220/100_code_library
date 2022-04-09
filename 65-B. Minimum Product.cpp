#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll x,y,a,b,n;
	    cin>>a>>b>>x>>y>>n;
	    if(((a+b)-(x+y) )<= n)
        {
            cout<<x*y<<"\n";
        }
        else
        {
            if(a==b)
            {
                if(x>y)
                {

                }
            }
	}
	return 0;
}
