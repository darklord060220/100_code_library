#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	   int ar[5],p;
	      int time=5*24;
	      for(int i=0;i<5;i++)
	      cin>>ar[i];
	      cin>>p;
	      int sum=0;
	      for(int i=0;i<5;i++)
	      {
	            sum+=ar[i];     
	      }
	      sum=sum*p;
	      if(sum<=time)
	      cout<<"No"<<endl;
	      else
	      cout<<"Yes"<<endl;
	}
	return 0;
}
