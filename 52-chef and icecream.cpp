#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a[10000],c5=1,c10=0,change,v=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(a[0]!=5)
        {
            v=1;
        }
        else
        {
        for(int i=1;i<n;i++)
        {
            change=a[i]-5;
            if(change==0)
            {
               c5++;
            }
            else if(change==5 && c5>0)
            {
                c5--;
                c10++;
            }
            else if(change==10 &&c10>0)
            {
                c10--;
            }
            else if(change==10 &&c5>1)
            {
                c5=c5-2;
            }
            else
            {
                v=1;
            }
        }
    }
    if(v==1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"yes";
    }
    }
    return 0;
    }
