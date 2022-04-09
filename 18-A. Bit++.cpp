#include<iostream>
using namespace std;
int main()
{
    int n=5,x=0;
  cin>>n;
    char a[4];
    for(int i=0;i<n;i++)
    {
         cin>>a;
         if(a[1]=='+')
         {
             x++;
         }
         else
         {
             x--;
         }
    }
    cout<<x;
        return 0;
}
