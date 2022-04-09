#include<iostream>
using namespace std;
int main()
{   long long int n,m=0;
    string p;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        getline(cin, p);
        if(p=="Tetrahedron")
        {
            m=m+4;
        }
        if(p=="Cube")
        {
            m=m+6;
        }
        if(p=="Octahedron")
        {
            m=m+8;
        }
        if(p=="Dodecahedron")
        {
            m=m+12;
        }
        if(p=="Icosahedron")
        {
            m=m+20;
        }

    }
    cout<<m;
    return 0;
}
