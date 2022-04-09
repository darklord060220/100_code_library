#include <iostream>
using namespace std;
#define ll long long int
int main ()
{
  ll t=0,a=0,b=0,c=0,x=0,y=0,z=0;
  cin>>t;
  while(t--)
  {
      int flag=0;
    cin>>x>>y>>z;
    if(x==y&& y==z && z==x)
    {
        flag=1;
    }
        if(x==y && x>z)
        {
            flag=2;
        }
        if(y==z && z>x)
        {
            flag=3;
        }
        if(z==x && x>y)
        {
            flag=4;

        }
        switch(flag)
        {
            case 0:cout<<"NO\n";
                    break;
            case 1:cout<<"YES\n"<<x<<" "<<y<<" "<<z<<"\n";
                    break;
            case 2:cout<<"YES\n"<<x<<" "<<z<<" "<<z<<"\n";
                    break;
            case 3:cout<<"YES\n"<<x<<" "<<x<<" "<<z<<"\n";
                    break;
            case 4:cout<<"YES\n"<<y<<" "<<x<<" "<<y<<"\n";
                    break;
        }
  }
  return 0;
}

