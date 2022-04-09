#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a;
        b=64-a;
        a=a-1;
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                if(b>0)
                {
                    cout<<"X";
                    b--;
                }
                else
                {
                    if(a>0)
                    {
                        cout<<".";
                        a--;
                    }
                    else
                    {
                        cout<<"O";
                    }
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}
