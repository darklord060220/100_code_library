#include<iostream>
using namespace std;
int main()
{
    char a,b,c,d;
    int co=0;
    cin>>a>>b;
    for(int i=0;i<5;i++)
    {
        cin>>c>>d;
        if(c==a||b==d)
        {
            co=1;
        }
    }
    if(co==1)
        cout<<"yes";
    else
        cout<<"no";
    return 0;
}
