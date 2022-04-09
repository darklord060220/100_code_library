#include<iostream>
using namespace std;
int main()
{
    int k,i,j,x=0;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>k;
            if(k==1)
            {
                if(i<3&&j<3)
                {
                    cout<<(6-i-j);
                }
                if(i>3&&j>3)
                {
                    cout<<-(6-i-j);
                }
                if(i>=3&&j<3||i>3&&j<=3)
                {
                    cout<<(i-j);
                }
                if(i<=3&&j>3||i<3&&j>=3)
                {
                    cout<<(j-i);
                }
                if(i==3&&j==3)
                {
                    cout<<x;
                }
            }
        }
    }
    return 0;
}
