#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a[100][100],c=0;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            for(int j=0;j<n;j++)
	        {
	                c++;
	                a[i][j]=c;
	        }
	        }
           else
	            {

	                for(int j=(n-1);j>=0;j--)
                    {
	                c++;
	                a[i][j]=c;
                    }
	            }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<"\n";
	        for(int j=0;j<n;j++)
	        {
	            cout<<a[i][j]<<" ";
	        }
	    }
	}
	return 0;
}

