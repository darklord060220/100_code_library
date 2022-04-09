#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a;
	  unsigned long long int f=1;
	    cin>>a;
	    if(a==0)
	    {
	        cout<<f<<"\n";
	    }
	    else
	    {
	        for(int i=1;i<=a;i++)
	        {
	            f=f*i;
	        }
	        cout<<f<<"\n";
	    }
	}

	return 0;
}
