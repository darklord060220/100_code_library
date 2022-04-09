#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll x=1,a,b,n,c;
	    cin>>n>>a>>b;
	    if(n==2)
        {
            cout<<a<<" "<<b<<"\n";
        }
        else
        {
            while((n-1)<((b-a)/x))
            {
                x++;
                while((b-a)%x !=0)
                {
                    x++;
                }
            }
            c=b;
            while(n--)
            {
                if(c>=1)
                {
                    cout<<c<<" ";
                    c=c-x;
                }
                else
                {
                    b=b+x;
                    cout<<b<<" ";
                }
            }
            cout<<"\n";
        }
	}
	return 0;
}
