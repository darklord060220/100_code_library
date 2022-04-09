#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,x,y,a,b;
    cin>>t;
    while(t--)
    {
       ll i=0;
        cin>>x>>y;
        a=x/9;
        b=y/9;
        if(a*9 != x)
        {
            a++;
        }
        if(b*9 !=y)
        {
            b++;
        }
        if(a>=b)
        {
            cout<<"1 "<<b<<"\n";
        }
        else
        {
            cout<<"0 "<<a<<"\n";
        }
    }
    return 0;
}

