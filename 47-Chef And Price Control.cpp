#include <iostream>
using namespace std;

int main() {

    int t,sum=0,sum1=0;
    cin>>t;
    while(t--)
    {
        int n,k,p[10000];
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
            sum=sum+p[i];
            if(p[i]>k)
            {
                p[i]=k;
            }
        }
        for(int i=0;i<n;i++)
        {
            sum1=sum1+p[i];
        }
        cout<<sum<<"\t"<<sum1;
        cout<<"\n"<<sum-sum1<<"\n";

    }
	return 0;
}

