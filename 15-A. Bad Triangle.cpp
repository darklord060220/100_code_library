#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll x,y,z,f=0,n,a[100000];
	    cin>>n;

	    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if((a[0]+a[1])<a[n-1])
        {
            cout<<"1"<<" "<<"2"<<" "<<n<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
        /*for(ll i=0;i<n-2;i++)
        {
            for(ll j=i+1;j<n-1;j++)
            {
                for(ll k=j+1;k<n;k++)
                {
                    if((a[i]+a[j])<a[k])
                    {
                        f=1;
                        x=i+1;
                        y=j+1;
                        z=k+1;
                        break;
                    }

                }
                if(f==1)
                break;
            }
            if(f==1)
            break;
        }
        if(f==1)
        {
            cout<<x<<" "<<y<<" "<<z<<"\n";
	}
	else
    {
        cout<<"-1\n";
    }*/
	}
            return 0;
        }
