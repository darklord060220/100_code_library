#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long int n,c,m,cp=0,mp=0;
        cin>>n;
        while(n--)
        {
            cin>>c;
            cin>>m;

            if(c>9)
            {
                int x,sum=0;
                while(c>0)
                {
                x=c%10;
                sum=sum+x;
                c=c/10;
                }
                c=sum;
            }
            if(m>9)
            {
                int x,sum=0;
                while(m>0)
                {
                x=m%10;
                sum=sum+x;
                m=m/10;
                }
                m=sum;
            }
            if(c>m)
            {
                cp=cp+1;
            }
            if(m>c)
            {
                mp=mp+1;
            }
            if(c==m)
            {
                 cp=cp+1;
                 mp=mp+1;
            }
        }
        if(cp>mp)
        {
            cout<<"0 "<<cp<<"\n";
        }
        if(mp>cp)
        {
            cout<<"1 "<<mp<<"\n";
        }
        if(mp==cp)
        {
            cout<<"2 "<<mp<<"\n";
        }
    }
    return 0;
}
