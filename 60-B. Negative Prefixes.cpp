#include <bits/stdc++.h>
#include<cstring>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,x,y,s,a[100000],b[100000];
	    cin>>n;
	    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b[i];
        }

        for(ll i=0;i<n;i++)
        {
            if(b[i]==1)
            {
                continue;
            }
            else
            {
                x=a[i];
                y=i;
            }
            for(ll j=i;j<n;j++)
            {
                if(x<a[j]&&b[j]==0)
                {
                    x=a[j];
                    y=j;
                }
            }
            if(i!=y)
            {
                s=a[i];
                a[i]=x;
                a[y]=s;
            }
        }
          for(ll i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
	}return 0;
}


