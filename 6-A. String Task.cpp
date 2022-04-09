#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char a[100];
    cin>>a;
    n=strlen(a);
    for(int i=0;i<n;i++)
    {
        int c=a[i];
        if(isupper(c))
            a[i]=tolower(c);
        if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y')
        {
            cout<<"."<<a[i];
        }

    }
    return 0;
}
