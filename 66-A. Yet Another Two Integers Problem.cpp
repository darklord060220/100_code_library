#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll x=0,a,b;
	    cin>>a>>b;
	    if(a>=b)
        {
            x=a-b;
        }
        else
        {
            x=b-a;
        }
        if(x%10 == 0)
        cout<<(x/10)<<"\n";
        else
            cout<<(x/10)+1<<"\n";
	}
	return 0;
}
