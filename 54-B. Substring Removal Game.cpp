#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll j=0,x=0;

	    string s;
	    int a[100]={0};

	    cin>>s;
	    ll n=s.size();
	    for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
            while(s[i]=='1')
            {
                a[j]=a[j]+1;
                i++;
            }
            j++;
            }
        }
       // cout<<"j"<<j<<"\n";
     //   for(int i=0;i<j;i++)
     //   cout<<a[i]<<" ";
      //  cout<<"\n";
        int h = sizeof(a)/sizeof(a[0]);
        sort(a, a+h, greater<int>());
        for(int i=0;i<j;i=i+2)
        {
            x=x+a[i];
        }
        cout<<x<<"\n";
	}
	return 0;
}
