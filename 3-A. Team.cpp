#include<iostream>
using namespace std;
int main()
{
int a,b,c,n,x=0;
cin>>n;
while(n--)
{
cin>>a>>b>>c;
if(a+b+c >=2)
{x++;}
}
cout<<x<<"\n";

return 0;
}
