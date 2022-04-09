#include<iostream>
#include<stdlib.h>

using namespace std;


int main()
{   char ch[100];
    int n,x=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ch[i];
    }
    for(int i=0;i<(n-1);i++)
    {
        if(ch[i]==ch[i+1])
        {
            x++;
        }
    }
      cout<<x;
    return 0;
}
