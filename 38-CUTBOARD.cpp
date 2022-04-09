#include <iostream>
using namespace std;

int main() {
long long int x,y[1000000],z[10000000];
cin>>x;
for(int i=0;i<x;i++)
{cin>>y[i]>>z[i];
}
for(int i=0;i<x;i++)
{
    cout<<(y[i]-1)*(z[i]-1)<<"\n";
}

	return 0;
}
