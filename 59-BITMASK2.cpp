#include<bits/stdc++.h>
#include<vector>
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl cout<<"\n";
using namespace std;
int main()
{
    fast
    vector <ll> v1,v2;
    ll t=0,n=0,a,b;
    cin>>t;
    while(t--)
    {

    vector <ll> v1,v2;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            v1.push_back(a);
        }
        for(ll i=0;i<n;i++)
        {
            cin>>b;
            v2.push_back(b);
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<ll>());
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            sum=sum+(v1[i]*v2[i]);
        }
        cout<<sum<<"\n";
    }
    return 0;
    }
