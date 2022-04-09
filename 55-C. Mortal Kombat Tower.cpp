#include <bits/stdc++.h>
#include<vector>
using namespace std;
#define ll long long int
int main()
 {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,c,x=0,f=1;
	    vector<ll> a;
	    cin>>n;
	    for(ll i=0;i<n;i++)
        {
            cin>>c;
            a.push_back(c);
        }


        for(ll i=0;i<n;i++)
        {
            if(f==1)
            {
                f=0;
                if(a[i]==1)
                {
                    x++;
                    if(a[i+1]==0)
                    {
                        if(a[i+2]==1)
                        {
                            i++;
                        }
                    }
                }
                else
                {
                    if(a[i+1]==0)
                    {
                        if(a[i+2]==1)
                        {
                            i++;
                        }
                    }
                }
                }
                else//my chance
                {
                    f=1;
                    if(a[i]==1)
                    {
                        if(a[i+1]==1)
                        {
                            i++;
                        }
                    }
                    else
                    {
                        if(a[i+1]==1)
                        {
                            i++;
                        }
                    }
                }
        }

        cout<<x<<"\n";
	}return 0;
}



