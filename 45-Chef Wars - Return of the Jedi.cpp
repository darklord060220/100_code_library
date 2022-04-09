#include <iostream>

using namespace std;
typedef long long ll;
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,p=0,h=0;
    cin>>t;
    while(t--)
    {
        cin>>h>>p;
        while(p>0 && h>0)
        {
            h=h-p;
            p=p/2;
//cout<<"p="<<p<<"h="<<h<<"\n";
        }
        if(h<=0)
        {
          cout<<"1\n";//<<"p="<<p<<"h="<<h<<"\n";
        }
        else
        {
            cout<<"0\n";//<<"p="<<p<<"h="<<h<<"\n";
        }
    }
    return 0;
}

