#include<iostream>
using namespace std;
int main()
{
    long long int x,y,f,g,t,a,b,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>x>>y>>a>>b;
        if(x==0 && y==0)
        {
            cout<<x<<"\n";
        }
        else
        {
        if(x<y)
        {
            f=x;
            g=y;
        }
        else
        {
            f=y;
            g=x;
        }
        if(b/2<a)
        {
            cout<<((g-f)*a+f*b)<<"\n";
        }
        else
        {
            cout<<(a*x+a*y)<<"\n";
        }
    }
    }
    return 0;
}
