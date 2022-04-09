#include<iostream>
using namespace std;
int main()
{
int n,c,t;
cin>>n>>c;
int i=1,x=0;
if(n%10 == c || n%10==0)
{
    cout<<"1";
}
else
{
   while(x==0)
   {
       i++;
        t=n*i;
        if(t%10==c || t%10==0)
{
    cout<<i;
    x=1;
}
   }
}
return 0;

}
