#include <bits/stdc++.h>

#include <iostream>

#include<vector>
using namespace std;
typedef long long ll;
int main ()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,p=0,h=0,x,k,i;
    cin>>t;
    while(t--)
    {
        vector<ll> v;
       int flag =0;
        cin>>p>>h;
        for(i=0;i<p;i++)
        {
            ll n;
            cin>>n;
            v.push_back(n);
        }
    sort(v.begin(), v.end(), greater<ll>());
     /*  for(i=0;i<p;i++)
        {
            cout<<v[i];
        }
*/
        for(i=0;i<p;i++)
        {
            x=v[i];
            k=1;
            while(x*k<=h)
            {
               // cout<<k<<"\n";
                if((x*k)==h)
                {
                    flag=1;
                }
                k++;
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            cout<<v[i]<<"\n";
        }
        else
        {
            cout<<"-1\n";
        }
    }
    return 0;
}


