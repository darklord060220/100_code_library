#include<iostream>
#include <numeric>
using namespace std;
int main()
{
    int T,P;
    int A[5];
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>A[0];cin>>A[1];cin>>A[2];cin>>A[3];cin>>A[4];cin>>P;

                if((A[0]+A[1]+A[2]+A[3]+A[4])*P <=120)
                {
                    cout<<"Yes";

                }
                else
                {
                    cout<<"no";
                }

    }
    return 0;
}
