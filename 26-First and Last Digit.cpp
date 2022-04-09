#include <iostream>
using namespace std;

int main()
{
    int t,n,dig1,dig2;
    cin>>t;
    while(t--)
    {
    cin>>n;
    dig1=n%10;
    while(n>0)
    {
        dig2=n;
        n=n/10;
    }
    cout<<dig1+dig2<<"\n";
    }

	return 0;
}
