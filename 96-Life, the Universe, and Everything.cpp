#include<bits/stdc++.h>
#include<vector>
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define nl cout<<"\n";
using namespace std;
int main()
{
    fast
    ll t=0,n=0,a;
        vector <ll> v1;
        for(ll i=0;i<10000;i++)
        {
        cin>>a;
        if(a==42)
        {
            break;
        }
        else
        {
            v1.push_back(a);
           cout<<"\n"<< v1[i];
        }
        }
        return 0;
    }

