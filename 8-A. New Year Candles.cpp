#include<iostream>
using namespace std;
int main()
{
    int a,b,x=0,c=0;
    cin>>a>>b;

    while(a>=1)
    {
        x=x+a;
        c=c+a%b;
        if(c>=b)
        {
            a=a+b;
            c=c-b;
        }
        a=(a/b);
      }
    cout<<x;
return 0;
}
