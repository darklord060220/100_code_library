#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch1,ch2,ch3;
    cin>>n;
    int max,min;
    max=n;min=1;
    while((ch1!='E') && (ch2!='E') && (ch3!='E'))
    {
        int x;
        x=max;
        x=x/2;
        cout<<x;
        cin>>ch1;
        if(ch1=='L')
        {
            cout<<x*2;
            cin>>ch2;
            if(ch2=='G')
            {
                cout<<x*2;
                cin>>ch3;
                if(ch3=='G')
                {
                cout<<((x*2)+1);
                ch3='E';
                }
            }
            if(ch2=='L')
            {

            }
        }
        if(ch1=='G')
        {
            if(ch2=='G')
            {
                if(ch3=='G')
                {
                cout<<((x*2)+1);
                ch3='E';
                }
                if(ch3=='L')
                {

                }

            }
            if(ch2=='L')
            {

            }
        }
    return 0;
}
