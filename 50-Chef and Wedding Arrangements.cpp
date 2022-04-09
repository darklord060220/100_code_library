#include <bits/stdc++.h>
//#include <map>
#include <vector>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	  //  map<int,int> m1;
        vector<int> x;
	    int n,k,l=0,g=0,ele=0;
	    cin>>n>>k;
	    for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            x.push_back(p);
        }
       /* for(int c : x)
          {
              m1[c]++;
          }*/
        for(int i=0;i<n;i++)
        {
            cout<<"******\n"<<i<<g<<l<<ele;
            if(g==0)
            {
                g=1;
                l++;
            }
            else
            {
                for(int j=ele;j<i;j++)
                {
                    if(x[j]==x[i])
                    {
                        ele=i;
                        i--;
                        g=0;
                        break;
                    }
                }

            }
        }
            /* for (auto& y: m1) {
                    if(y.second >l && (y+1).second
   l=y.second;
  }
  */
  cout<<l<<"\n";
	}
  return 0;
}

