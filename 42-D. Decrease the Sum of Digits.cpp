#include <bits/stdc++.h>
using namespace std;
#define ll long long
int sum(long long a)
{
   ll res=0;
    while(a>0)
    {
   res += a % 10;
    a /=10;
    }
    // cout<<res;
    return res;
}
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll a,b;
	    cin>>a>>b;
	    ll n=0;

	    if(sum(a) <= b)
        {
            cout<<0<<"\n";
            continue;
        }
            ll h=1;
            for(int i=0;i<18;i++)
            {
                int x = (a/h)% 10;
                ll add = h * ((10 - x)% 10);
                a+= add;
                n+=add;
                if(sum(a)<=b)
                {
                    break;
                }
                h*=10;
            }
            cout<<n<<endl;
            }

	return 0;
}
