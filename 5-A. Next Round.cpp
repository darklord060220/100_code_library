#include<iostream>
using namespace std;
int main()
{
    int n,k,x=0,y;
    cin>>n>>k;
    int s[100];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
    if(s[k-1]<=s[i]&&s[i]>0)
    {
        x++;
    }
    }
    cout<<x;
    return 0;
}
