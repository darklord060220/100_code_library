#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;
int main()
{
    int n,x=0;
    char b[101], a[101];
    cin>>a>>b;
    n=strlen(a);

    for(int i=0;i<n;i++)
    {
        char q,p;
        p=tolower(a[i]);
    q=tolower(b[i]);
        if(p<q)
    {
        x=-1;
        break;
    }
    if(p>q)
    {
        x=1;
        break;
    }
    }
    cout<<x;
    return 0;
}
