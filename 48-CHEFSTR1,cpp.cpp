#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n,a,b,sum=0,diff=0;
        cin>>n;
        n=n-1;
        cin>>b;
      while(n--)
        {
            a=b;
            cin>>b;
            diff=a-b;
            if(diff<0)
            {
                diff=-diff;
            }

            sum=sum+(diff-1);

        }
        cout<<sum<<"\n";
    }
    return 0;
}
